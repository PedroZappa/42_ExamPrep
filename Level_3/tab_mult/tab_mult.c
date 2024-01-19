#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
int ft_atoi(char *str);
int ft_isdigit(int c);
int ft_isspace(int c);

int main(int argc, char *argv[])
{
	int num;
	int i;

	if (argc == 2)
	{
		i = 1;
		num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " * ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(i * num);
			write(1, "\n", 1);
			++i;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}

int ft_atoi(char *str)
{
	int num = 0;
	int neg = 1;

	while (ft_isspace(*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*str++ - '0');
	return (num * neg);
}

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}
