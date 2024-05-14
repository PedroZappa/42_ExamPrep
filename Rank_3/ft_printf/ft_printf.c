/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:49:10 by passunca          #+#    #+#             */
/*   Updated: 2024/04/29 16:02:51 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

void	ft_putstr(char *str, int *len);
void	ft_putnbr(long nbr, int base, int *len);

/// @brief		Prints a string to the standard output
/// @param fmt	The string to be printed
/// @param ...	The arguments to be inserted into the fmt string
int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if ((*fmt == '%') && (*(fmt + 1) != '\0'))
		{
			++fmt;
			if (*fmt == 's')
				ft_putstr(va_arg(args, char *), &len);
			else if (*fmt == 'd')
				ft_putnbr(va_arg(args, int), 10, &len);
			else if (*fmt == 'x')
				ft_putnbr(va_arg(args, int), 16, &len);
		}
		else
			len += write(1, fmt, 1);
		++fmt;
	}
	return (va_end(args), len);
}

/// @brief		Prints a string to the standard output
/// @param str	The string to be printed
/// @param len	The length of the string
void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

/// @brief		Prints an integer to the standard output
/// @param nbr	The integer to be printed
/// @param base	The base of the integer
/// @param len	The length of the integer (number of characters)
void	ft_putnbr(long nbr, int base, int *len)
{
	char *hex = "0123456789abcdef";

	if (nbr < 0)
	{
		nbr *= -1;
		*len += write(1, "-", 1);
	}
	if (nbr >= base)
		ft_putnbr((nbr / base), base, len);
	*len += write(1, &hex[(nbr % base)], 1);
}
