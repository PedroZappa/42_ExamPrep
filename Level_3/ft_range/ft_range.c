#include <stdlib.h>

/*	ft_range - return an array of integers from start to end, inclusive
 *	
 *	Set count to 0
 *	Make a copy of 'start' into 'start_n'
 *	If start is smaller than end
 *		while start is smaller than end
 *			Increment 'start_n'
 *			Count number of elements in range between start and end
 *		Allocate memory for array
 *		Set count to 0
 *		Reset 'start_n' to 'start'
 *	else (if end is larger than start)
 *		while 'start_n' is larger than end
 *			Decrement 'start_n'
 *			Count number of elements in range between start and end
 *		Allocate memory for array
 *		Set count to 0
 *		
 *	*/
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

