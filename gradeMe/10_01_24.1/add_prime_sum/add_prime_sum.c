#include <unistd.h>

int ft_atoi(char *str);
int is_prime(int n);
int ft_isspace(char c);
int ft_isnum(char c);
void ft_putnbr(int n);

int main(int argc, char *argv[])
{
	int max;
	int curr;
	int sum;

	if (argc == 2)
	{
		curr = 2;
		max = ft_atoi(argv[1]);
		sum = 0;
		while (curr <= max)
		{
			if (is_prime(curr))
				sum += curr;
			++curr;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}

int ft_atoi(char *str)
{
	int num;
	int neg;

	while (ft_isspace(*str))
		++str;
	neg = 1;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	num = 0;
	while (ft_isnum(*str))
		num = (num * 10) + (*str++ - '0');
	return (num * neg);
}

/*	Checks if 'n' is prime
 *
 *	If 'n' is is smaller than 2, it is not prime
 *	Loop throught 'i' while: ((i * i) <= n)
 *		// this condtion is used instead of checking all the way 
 *		// up to 'n' because if 'n' is not a prime number, it must 
 *		// have a factor less than or equal to its square root.
 *		If 'n' is divisible by i, it is not prime
 *	Returns 1 if 'n' is prime, 0 otherwise
 *	*/
int is_prime(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	while ((i * i) <= n)
	{
		if (n % i == 0)
			return (0);
		++i;
	}
	return (1);
}

int ft_isspace(char c)
{
	return((c == ' ') || ((c >= 9) && (c <= 13)));
}

int ft_isnum(char c)
{
	return((c >= '0') && (c <= '9'));
}

void ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr((n / 10));
	write(1, &"0123456789"[n % 10], 1);
}

