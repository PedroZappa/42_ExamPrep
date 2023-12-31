#include <unistd.h>

void	print_n(int n);

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			write(1, "FizzBuzz ", 10);

	}
}

void	print_n(int n)
{
	char *digits;

	digits = "0123456789";
	if (n > 9)
		print_n(n / 10);
	write(1, &digits[n % 10], 1);
}
