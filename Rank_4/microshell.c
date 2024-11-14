/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:13:32 by passunca          #+#    #+#             */
/*   Updated: 2024/11/12 13:57:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

void ft_putstr_fd(char *str, char *arg, int fd);
int ft_exec(char **argv, char **env, int i);
void ft_pipe(int has_pipe, int *fd, int end);
int ft_cd(char **argv, int i);

typedef enum s_exit { SUCCESS = 0, FAILURE = 1 } t_exit;

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
	while (argv[i]) // Loop while there are arguments
	{
		argv += (i + 1);
		i = 0;
		while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
			++i;
		if (i)
			status = ft_exec(argv, envp, i);
	}
	return (status);
}

int ft_exec(char **argv, char **env, int i) {
	int has_pipe = (argv[i] && !strcmp(argv[i], "|")); // Check for a pipe
	int fd[2];
	int pid;
	int status;

	if (!strcmp(*argv, "cd") && !has_pipe) // Handle cd command
		return (ft_cd(argv, i));
	if (has_pipe && pipe(fd) == -1) // Handle pipe fail
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if ((pid = fork()) == -1) // Handle Fork Fail
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
	if (!pid) // Child Process
	{
		argv[i] = 0;              // Set argv[i] to NULL
		ft_pipe(has_pipe, fd, 1); // Close unused fd (STDOUT)
		if (!strcmp(*argv, "cd")) // Execute builtin
			exit(ft_cd(argv, i));
		execve(*argv, argv, env); // Execute binary
		ft_putstr_fd(ERR_EXECVE, *argv, STDERR_FILENO), exit(FAILURE);
	}
	waitpid(pid, &status, 0);
	ft_pipe(has_pipe, fd, 0); // Close unused fd (STDIN)
	return (WIFEXITED(status) && WEXITSTATUS(status)); // Return child status
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
		return (ft_putstr_fd(ERR_CD, argv[i], 2), 1);
	if (i != 2)
		return (ft_putstr_fd(ERR_CD_ARGS, argv[i], 2), 1);
	return (0);
}

void ft_pipe(int has_pipe, int *fd, int end) {
	if (has_pipe &&
		(dup2(fd[end], end) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		ft_putstr_fd(ERR, NULL, STDERR_FILENO), exit(FAILURE);
}
