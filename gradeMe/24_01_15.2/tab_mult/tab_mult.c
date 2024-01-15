#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
int ft_atoi(char *str);
int ft_isdigit(int c);
int ft_isspace(int c);

int  main(int argc, char **argv)
{
	int n;
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		n = ft_atoi(argv[1]);
		i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			++i;
		}
	}
}

int ft_atoi(char *str)
{
	int sign;
	int num;
	
	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*str++ - '0');
	return (num * sign);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
