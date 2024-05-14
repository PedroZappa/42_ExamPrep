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
#include <limits.h>
#include <stddef.h>

int	main(void)
{
	ft_printf("Print strings:\n");
	ft_printf("\t%s\n", "Hello Whirl!");
	ft_printf("\t%s\n", NULL);

	ft_printf("Print digits:\n");
	ft_printf("\t%d\n", 42);
	ft_printf("\t%d\n", -42);
	ft_printf("\t%d\n", INT_MIN);
	ft_printf("\t%d\n", INT_MAX);

	ft_printf("Print hex:\n");
	ft_printf("\t%x\n", 42);
	ft_printf("\t%x\n", -42);

	ft_printf("Print mixed:\n");
	ft_printf("\t%d is %s the answer\n", 42, "NOT");
	ft_printf("\t%x is %d is %s the answer\n", 42, 42, "NOT");
	return (0);
}
