#include <unistd.h>

int		ft_atoi(char *str);
int		ft_isdigit(int c);
int		ft_isspace(int c);
void	print_hex(int n);

int		main(int argc, char **argv)
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

int		ft_atoi(char *str)
{
	int num = 0;
	int sign = 1;

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

int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int ft_isspace(int c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}
