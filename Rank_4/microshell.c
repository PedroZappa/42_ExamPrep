/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:13:32 by passunca          #+#    #+#             */
/*   Updated: 2024/09/23 09:42:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr_fd(char *str, char *arg, int fd);
void	ft_exec(char **argv, char **env, int fd, int i);

#define EXECVE_FAIL	"Error: command not found.\n"

int main (int argc, char **argv, char **envt)
{
	int	fd;
	int	i;

	(void)argc;
	i = 0;
	fd = dup2(STDIN_FILENO, 0);
	while (argv[i] && argv[i + 1]) // Loop while there are arguments
	{

	}
	close(fd);
	return (0);
}

void	ft_putstr_fd(char *str, char *arg, int fd)
{
	while (*str)
		write(fd, str++, 1);
	if (arg)
		while (*arg)
		write(fd, arg++, 1);
	write(fd, "\n", 1);
}

void	ft_exec(char **argv, char **env, int fd, int i)
{
	argv[i] = NULL;
	dup2(fd, STDOUT_FILENO);
	close(fd);
	execve(argv[0], argv, env);
	ft_putstr_fd(EXECVE_FAIL, argv[0], 2);
	exit(EXIT_FAILURE);
}
