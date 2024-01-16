#include <stdio.h>
#include <stdlib.h>
#include "ft_swap.c"

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		printf("Before\t:\t%d %d\n", a, b);

		ft_swap(&a, &b);
		printf("After\t:\t%d %d\n", a, b);
	}

	return (0);
}
