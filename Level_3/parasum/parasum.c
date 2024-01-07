#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void ft_putchar(char c);
void ft_putnbr(int nb);

int main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	ft_putchar('\n');
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
