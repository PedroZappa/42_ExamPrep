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
#include <string.h>

void	ft_putstr_fd(char *str, char *arg, int fd);
void	ft_exec(char **argv, char **env, int i);
void	ft_pipe(char **argv, int fd, int i);

#define EXECVE_FAIL	"Error: command not found.\n"

int main (int argc, char **argv, char **envt)
{
	int	status;
	int	i;

	(void)argc;
	i = 0;
	status = 0;
	while (argv[i]) // Loop while there are arguments
	{
		argv += (i + 1);
		while (argv[i] && strcmp(argv[i], ";") && strcmp(argv[i], "|"))
			++i;
		if (i)
			ft_exec(argv, envt, i);
	}
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

void	ft_exec(char **argv, char **env, int i)
{
	// If arg is cd command
	//	Exec cd and return
	
	// If has_pipe and pipe fails
	//	Pipe Err
	
	// If fork fails 
	//	Fork Err
	
	// if for SUCCESS
	
}
