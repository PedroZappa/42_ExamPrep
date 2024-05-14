/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:28:46 by passunca          #+#    #+#             */
/*   Updated: 2024/05/14 15:39:24 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	main(void)
{
	ft_printf("Print strings:\n");
	ft_printf("%s\n", "Hello Whirl!");
	ft_printf("%s\n", NULL);

	ft_printf("Print digits:\n");
	ft_printf("%d\n", 42);
	ft_printf("%d\n", -42);

	ft_printf("Print hex:\n");
	ft_printf("%x\n", 42);
	ft_printf("%x\n", -42);
	return (0);
}
