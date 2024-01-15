#include <unistd.h>

int ft_isspace(int c);
int ft_isdigit(int c);
void ft_putchar(char c);
int ft_putnbr(int nb);
int ft_atoi(char *str);

int main(int argc, char *argv[])
{
	int nbr;
	int n;

	if (argc != 2)
		write(1, "\n", 1);
	else 
	{
		n = 1;
		nbr = ft_atoi(argv[1]);	
		while (n <= 9)
		{
			ft_putnbr(n);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(n * nbr);
			write(1, "\n", 1);
			++n;
		}
	}
	return (0);
}

int ft_atoi(char *str)
{
	int nbr;
	int sign;

	nbr = 0;
	sign = 1;

	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		if (*(str + 1) == '-')
			return (0);
		++str;
	}
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - '0');
	return (nbr * sign);
}

int ft_isspace(int c)
{
	return ((c == ' ') || (c >= 9 && c <= 13));
}

int ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
