#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

enum e_exit { SUCCESS, FAILURE };

#define ERR ""
#define ERR_CD ""
#define ERR_CD_ARGS ""
#define ERR_EXECVE ""

int ft_exec(char **argv, char **envp, int i);
int ft_cd(char **arv, int i);
void ft_putstr(char *argv, char *arg, int fd);
void ft_pipe(int has_pipe, int *fd, int end);

int main(int argc, char **argv, char **envp) {
  int status, i = 0;

  (void)argc;
  while (argv[i]) {
    argv += (i + 1);
    while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
      ++i;
    if (i)
      status = ft_exec(argv, envp, i);
  }
  return (status);
}

int ft_exec(char **argv, char **envp, int i) {
  int has_pipe = (argv[i] && !strcmp(argv[i], "|"));
  int status, pid;
  int fd[2];

  if (!has_pipe && !strcmp(*argv, "cd"))
    return (ft_cd(argv, i));
  if (has_pipe && (pipe(fd) == -1))
    return (ft_putstr(ERR, NULL, 2), FAILURE);
  if ((pid = fork()) == -1)
    ft_putstr(ERR, NULL, 2), exit(FAILURE);
  if (!pid) {
    argv[i] = 0;
    ft_pipe(has_pipe, fd, 1); // pipe
    if (!strcmp(*argv, "cd")) // //cd
      exit(ft_cd(argv, i));
    execve(*argv, argv, envp);
    ft_putstr(ERR, *argv, 2), exit(1);
  }
  waitpid(pid, &status, 0);
  ft_pipe(has_pipe, fd, 0); // pipe
  return (WEXITSTATUS(status) && WIFEXITED(status));
}

int ft_cd(char **argv, int i) {
  if (chdir(argv[i]) == -1)
    return (ft_putstr(ERR_CD, NULL, 2), FAILURE);
  if (i != 2)
    return (ft_putstr(ERR_CD_ARGS, NULL, 2), FAILURE);
  return (0);
}

void ft_putstr(char *str, char *arg, int fd) {
  while (*str)
    write(fd, str++, 1);
  if (*arg)
    while (*arg)
      write(fd, arg++, 1);
  write(fd, "\n", 1);
}

void ft_pipe(int has_pipe, int *fd, int end) {
  if (has_pipe &&
      (dup2(fd[end], end) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
    ft_putstr(ERR, NULL, 2);
}
