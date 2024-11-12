/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell_6.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:46:56 by passunca          #+#    #+#             */
/*   Updated: 2024/11/12 14:04:48 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int ft_exec(char **argv, char **envp, int i);
int ft_cd(char **argv, int i);
void ft_pipe(int has_pipe, int *fd, int end);
void ft_putstr_fd(char *str, char *arg, int fd);

enum e_exit { SUCCESS, FAILURE };

#define ERR "error: fatal"
#define ERR_CD "error: cd: cannot change directory to "
#define ERR_CD_ARGS "error: cd: bad arguments"
#define ERR_EXECVE "error: cannot execute "

int main(int argc, char **argv, char **envp) {
	int status;
	int i;

	(void)argc;
	i = 0;
	status = 0;
	while (argv[i]) {
		argv += (i + 1);
		i = 0;
		while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
			++i;
		if (i)
			status = ft_exec(argv, envp, i);
	}
	return (status);
}

int ft_exec(char **argv, char **envp, int i) {
	int has_pipe = (argv[i] && !strcmp(argv[i], "|"));
	int pid;
	int status;
	int fd[2];

	if (!has_pipe && !strcmp(*argv, "cd"))
		return (ft_cd(argv, i));
	if (has_pipe && pipe(fd) == -1)
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if ((pid = fork()) == -1)
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if (!pid) {
		argv[i] = 0;
		ft_pipe(has_pipe, fd, 1);
		if (!strcmp(*argv, "cd"))
			exit(ft_cd(argv, i));
		execve(*argv, argv, envp);
		ft_putstr_fd(ERR_EXECVE, *argv, STDERR_FILENO), exit(FAILURE);
	}
	waitpid(pid, &status, 0);
	ft_pipe(has_pipe, fd, 0);
	return (WIFEXITED(status) && WEXITSTATUS(status));
}

void ft_putstr_fd(char *str, char *arg, int fd) {
	while (*str)
		write(fd, str++, 1);
	if (arg)
		while (*arg)
			write(fd, arg++, 1);
	write(fd, "\n", 1);
}

int ft_cd(char **argv, int i) {
	if (chdir(argv[i]) == -1)
		ft_putstr_fd(ERR_CD, argv[i], STDERR_FILENO);
	if (i != 2)
		ft_putstr_fd(ERR_CD_ARGS, argv[i], STDERR_FILENO);
	return (SUCCESS);
}

void ft_pipe(int has_pipe, int *fd, int end) {
	if (has_pipe && (dup2(fd[end], end) == - 1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
}
