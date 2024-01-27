#include <stdio.h>
#include "ft_range.c"
// #include "ft_range2.c"

int ft_atoi(char *str);
int ft_isspace(int c);
int ft_isdigit(int c);	

int main(int argc, char **argv)
{	
	int *arr = NULL;
	int arrlen;
	int min;
	int max;
	int i;

	if (argc == 3)
	{
		min = ft_atoi(argv[1]);
		max = ft_atoi(argv[2]);
		arr = ft_range(min, max);

		printf("min = %d\nmax = %d\n", min, max);

		arrlen = 0;
		if (min <= max)
		{
			while (min <= max)
			{
				++arrlen;
				++min;
			}
		}
		else
		{
			while (min >= max)
			{
				++arrlen;
				--min;
			}
		}
		i = 0;
		while (i < arrlen)
		{
			printf("%d ", arr[i]);
			++i;
		}
		printf("\n");
	}
	else
		printf("Usage: %s min max\n", argv[0]);
	free(arr);
	return (0);
}

int ft_atoi(char *str)
{
	int num;
	int neg;

	num = 0;
	neg = 1;
	while (ft_isspace(*str))
		++str;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*str++ - '0');
	return (num * neg);
}

int ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
