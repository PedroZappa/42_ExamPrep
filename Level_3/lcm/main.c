#include <stdio.h>
#include "lcm.c"

int ft_atoi(char *str);
int ft_isspace(int c);
int ft_isnum(int c);

int main(int argc, char *argv[])
{
	unsigned int a, b;

	if (argc == 3)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[2]);
		printf("lcm(%u, %u) = %u\n", a, b, lcm(a, b));
	}
	else
		printf("Usage: %s <a> <b>\n", argv[0]);

	return (0);
}

int ft_atoi(char *str)
{
	int num;
	int neg;

	while (ft_isspace(*str))
		++str;
	neg = 1;
	if (*str == '-' || *str == '+')
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

int ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int ft_isnum(int c)
{
	return (c >= '0' && c <= '9');
}
