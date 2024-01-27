#include <stdio.h>
#include "ft_rrange.c"

int main(int argc, char **argv)
{
	int *arr;
	int arrlen;
	int min = 0;
	int max = 0;
	int i = 0;
	
	if (argc == 3)
	{
		min = atoi(argv[1]);
		max = atoi(argv[2]);
		arr = ft_rrange(min, max);
		if (!arr)
			return (1);
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
	return (0);
}
