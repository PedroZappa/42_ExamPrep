#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <unistd.h>

typedef struct s_client {
  int id;
  char *m;
} t_client;

void fatal(void);
void broadcast(int client_fd, int max_fd, fd_set write_fds, char *m);
void clean(int max_fd, t_client *cls, fd_set active_fds);
int extract_msg(char **buf, char **msg);
char *str_join(char *buf, char *add);

int main(int argc, char **argv) {
  if (argc != 2) {
    write(2, "Wrong number of arguments\n", 26);
    exit(1);
  }
  int sockfd, client_fd, max_fd, id;
  unsigned int len;
  struct sockaddr_in serveraddr, cli;

  sockfd = socket(AF_INET, SOCK_STREAM, 0); // Create Socket
  if (sockfd == -1)
    fatal();

  bzero(&serveraddr, sizeof(serveraddr)); // Set Socket
  serveraddr.sin_family = AF_INET;
  serveraddr.sin_addr.s_addr = htonl(2130706433); // 127.0.0.1
  serveraddr.sin_port = htons(atoi(argv[1]));

  if ((bind(sockfd, (const struct sockaddr *)&serveraddr,
            sizeof(serveraddr))) != 0)
    fatal();
  if (listen(sockfd, 10) != 0)
    fatal();

  const int BSIZE = 1024;        // Buffer Size
  const int MSIZE = 64;          // Message Size
  const int CSIZE = (16 * 4096); // Client Size

  t_client cls[CSIZE];
  fd_set active_fds, read_fds, write_fds;

  FD_ZERO(&active_fds);
  FD_SET(sockfd, &active_fds);

  max_fd = sockfd;
  id = 0;

  while (1) {
    read_fds = write_fds = active_fds; // Copy & Wait
    int active = select((max_fd + 1), &read_fds, &write_fds, NULL, NULL);
    if (active == -1) {
      clean(max_fd, cls, active_fds);
      fatal();
    }

    if (FD_ISSET(sockfd, &read_fds)) { // New client
                                       // Extract Connection Request
      client_fd = accept(sockfd, (struct sockaddr *)&cli, &len);
      if (client_fd >= 0) {
        cls[client_fd].id = ++id; // Init client
        cls[client_fd].m = NULL;
        FD_SET(client_fd, &active_fds);

        if (client_fd > max_fd) // Update max_fd
          max_fd = client_fd;

        char m[MSIZE]; // Init message
        bzero(m, MSIZE);
        sprintf(m, "server: client %d just arrived\n", cls[client_fd].id);
        broadcast(client_fd, max_fd, write_fds, m);
      }
    } else { // Known Client
      for (client_fd = 0; client_fd <= max_fd; ++client_fd) {
        if (FD_ISSET(client_fd, &read_fds)) { // New event
          char recv_buff[BSIZE];
          bzero(recv_buff, BSIZE);
          int bytes = recv(client_fd, recv_buff, (BSIZE - 1), 0); // Get msg
          if (bytes <= 0) { // No message = Disconnected
            char m[MSIZE];
            bzero(m, MSIZE);
            sprintf(m, "server: client %d just left\n", cls[client_fd].id);
            broadcast(client_fd, max_fd, write_fds, m);

            FD_CLR(client_fd, &active_fds);
            close(client_fd);
            if (cls[client_fd].m) {
              free(cls[client_fd].m);
              cls[client_fd].m = NULL;
            }
          } else { // Has message
            char *line = NULL;
            cls[client_fd].m = str_join(cls[client_fd].m, recv_buff);
            while (extract_msg(&(cls[client_fd].m), &line)) {
              char m[MSIZE + strlen(line)];
              bzero(m, (MSIZE + strlen(line)));
              sprintf(m, "client %d: %s", cls[client_fd].id, line);
              broadcast(client_fd, max_fd, write_fds, m);

              free(line); // Clean up
              line = NULL;
            }
            if (cls[client_fd].m[0] == '\0') { // Handle empty message
              free(cls[client_fd].m);
              cls[client_fd].m = NULL;
            }
          }
        }
      }
    }
  }
  clean(max_fd, cls, active_fds);
  return (0);
}

void fatal(void) {
  write(2, "Fatal error\n", 12);
  exit(1);
}

void broadcast(int client_fd, int max_fd, fd_set write_fds, char *m) {
  for (int b_fd = 0; b_fd <= max_fd; ++b_fd) {
    if (FD_ISSET(b_fd, &write_fds) && (b_fd != client_fd)) {
      send(b_fd, m, strlen(m), 0);
    }
  }
}

void clean(int max_fd, t_client *cls, fd_set active_fds) {
  for (int client_fd = 0; client_fd <= max_fd; ++client_fd) {
    if (FD_ISSET(client_fd, &active_fds)) { // Close fd
      FD_CLR(client_fd, &active_fds);
      close(client_fd);
    }
    if (cls[client_fd].m) { // Free message
      free(cls[client_fd].m);
      cls[client_fd].m = NULL;
    }
  }
}

int extract_message(char **buf, char **msg) {
  char *newbuf;
  int i;

  *msg = 0;
  if (*buf == 0)
    return (0);
  i = 0;
  while ((*buf)[i]) {
    if ((*buf)[i] == '\n') {
      newbuf = calloc(1, sizeof(*newbuf) * (strlen(*buf + i + 1) + 1));
      if (newbuf == 0)
        return (-1);
      strcpy(newbuf, *buf + i + 1);
      *msg = *buf;
      (*msg)[i + 1] = 0;
      *buf = newbuf;
      return (1);
    }
    i++;
  }
  return (0);
}

char *str_join(char *buf, char *add) {
  char *newbuf;
  int len;

  if (buf == 0)
    len = 0;
  else
    len = strlen(buf);
  newbuf = malloc(sizeof(*newbuf) * (len + strlen(add) + 1));
  if (newbuf == 0)
    return (0);
  newbuf[0] = 0;
  if (buf != 0)
    strcat(newbuf, buf);
  free(buf);
  strcat(newbuf, add);
  return (newbuf);
}
