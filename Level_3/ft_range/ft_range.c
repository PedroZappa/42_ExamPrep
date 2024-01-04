#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	count;
	int start_n;
	int *arr;
	int i;

	count = 0;
	start_n = start;
	if (start <= end)
	{
		while (start_n <= end)
		{
			++start_n;
			++count;
		}
		arr = malloc(sizeof(int) * count);
		count = 0;
		start_n = start;
		while (start_n <= end)
		{
			arr[count] = start_n;
			++start_n;
			++count;
		}
	}
	else
	{
		while (start_n >= end)
		{
			--start_n;
			++count;
		}
		arr = malloc(sizeof(int) * count);
		start_n = start;
		i = 0;
		while (i < count)
		{
			arr[i] = start_n;
			--start_n;
			++i;
		}
	}
	return (arr);
}

