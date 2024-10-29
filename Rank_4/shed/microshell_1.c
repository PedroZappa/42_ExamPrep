#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

typedef enum e_exit { SUCCESS, FAILURE } t_exit;

#define ERR "error: fatal"
#define ERR_CD "error: cd: cannot change directory to "
#define ERR_CD_ARGS "error: cd: bad arguments"
#define ERR_EXECVE "error: cannot execute"

void ft_putstr_fd(char *str, char *arg, int fd);
int ft_exec(char **argv, char **envp, int i);
int ft_cd(char **argv, int i);
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
	int status;
	int pid;
	int fd[2];

	if (!has_pipe && !strcmp(*argv, "cd"))
		return (ft_cd(argv, i));
	if (has_pipe && (pipe(fd) == -1))
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if ((pid = fork()) == -1)
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if (!pid) {
		argv[i] = 0;
		ft_pipe(has_pipe, fd, 1);
		if (!strcmp(*argv, "cd"))
			exit(ft_cd(argv, i));
		execve(*argv, argv, envp);
		ft_putstr_fd(ERR, *argv, STDERR_FILENO), exit(FAILURE);
	}
	waitpid(pid, &status, 0);
	ft_pipe(has_pipe, fd, 0);
	return (WIFEXITED(status) && WEXITSTATUS(status));
}

void ft_putstr_fd(char *str, char *arg, int fd) {
	while (*str)
		write(fd, str++, 1);
	if (*arg)
		while (*arg)
			write(fd, arg++, 1);
	write(fd, "\n", 1);
}

int ft_cd(char **argv, int i) {
	if (chdir(argv[i]) == -1)
		return (ft_putstr_fd(ERR_CD, *argv, STDERR_FILENO), FAILURE);
	if (i != 2)
		return (ft_putstr_fd(ERR_CD_ARGS, *argv, STDERR_FILENO), FAILURE);
	return (SUCCESS);
}

void ft_pipe(int has_pipe, int *fd, int end)
{
	if (has_pipe && (dup2(fd[end], end) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
}