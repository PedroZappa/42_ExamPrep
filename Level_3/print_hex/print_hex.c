#include <unistd.h>

int ft_atoi(char *str);
void	print_hex(int n);

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return 0;
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	write(1, &"0123456789ABCDEF"[n % 16], 1);
}

int ft_atoi(char *str)
{
	int num = 0;
	int neg = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		++str;
	if (*str == '-')
	{
		neg = -1;
		++str;
	}
	while (*str >= '0' && *str <= '9')
		num = (num * 10) + (*str++ - '0');
	return (num * neg);
}
