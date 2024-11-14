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

#define ERR "error: fatal"
#define ERR_CD "error: cd: cannot change directory to "
#define ERR_CD_ARGS "error: cd: bad arguments"
#define ERR_EXECVE "error: cannot execute "

int ft_exec(char **argv, char **envp, int i);
int ft_cd(char **argv, int i);
void ft_pipe(int has_pipe, int *fd, int end);
void ft_putstr_fd(char *str, char *arg, int fd);

int main(int argc, char **argv, char **envp) {
	int status, i = 0;

	(void)argc;
	while (argv[i]) { // Loop while there are arguments
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
	int has_pipe = (argv[i] && !strcmp(argv[i], "|")); // Check for a pipe
	int fd[2], status, pid;

	if (!has_pipe && !strcmp(*argv, "cd")) // Check for a pipe
		return (ft_cd(argv, i));
	if (has_pipe && pipe(fd) == -1) // Get pipe
		ft_putstr_fd(ERR, NULL, 2), exit(1);
	if ((pid = fork()) == -1) // Fork
		ft_putstr_fd(ERR, NULL, 2), exit(1);
	if (!pid) { // Child
		argv[i] = 0;
		ft_pipe(has_pipe, fd, 1); // Check for a pipe
		if (!strcmp(*argv, "cd")) // Execute builtin (STDOUT)
			exit(ft_cd(argv, i));
		execve(*argv, argv, envp);// Execute binary
		ft_putstr_fd(ERR_EXECVE, *argv, 2);
	}
	waitpid(pid, &status, 0); // Wait for child to finish
	ft_pipe(has_pipe, fd, 0); // Execute builtin (STDIN)
	return (WIFEXITED(status) && WEXITSTATUS(status));
}

int ft_cd(char **argv, int i) {
	if (chdir(argv[1]) == -1)
		return (ft_putstr_fd(ERR_CD, argv[i], 2), 1);
	if (i != 2)
		return (ft_putstr_fd(ERR_CD_ARGS, NULL, 2), 1);
	return (0);
}

void ft_pipe(int has_pipe, int *fd, int end) {
	if (has_pipe &&
		(dup2(fd[end], end) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
		ft_putstr_fd(ERR, NULL, 2), exit(1);
}

void ft_putstr_fd(char *str, char *arg, int fd)
{
	while (*str)
		write(fd, str++, 1);
	if (arg)
		while (*arg)
			write(fd, arg++, 1);
	write(fd, "\n", 1);
}
