#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "ft_itoa.c"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int intarr[6] = { 
			atoi(argv[1]), 42, -42, INT_MIN, INT_MAX, 0,
		};
		int n = 6;
		int i = 0;

		while (i < n)
		{
			printf("%d : %s\n", i, ft_itoa(intarr[i]));
			++i;
		}
	}
	else
		printf("Usage: ./a.out <number>\n");
	return 0;
}
