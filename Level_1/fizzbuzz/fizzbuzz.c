#include <unistd.h>

void	ft_putnbr(int n);

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "fizzbuzz ", 10);
		else if ((n % 3) == 0)
			write(1, "fizz ", 5);
		else if ((n % 5) == 0)
			write(1, "buzz ", 5);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		++n;
	}
}

void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}
