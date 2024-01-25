#include <stdlib.h>

int abs(int n);

/*	ft_rrange - return an array of integers from end to start, inclusive	
 *
 *	Set 'n' with the absolute value of ints in array:
 *	Allocate memory for 'arr':
 *		If alloc fails return NULL
 *	Loop through 'arr' from the end to the start
 *		Set arr[range] to:
 *			if 'end' is greater than 'start'
 *				Increment 'start'
 *			else
 *				Decrement 'start'
 *		Return 'arr'
 *	*/
int *ft_rrange(int start, int end)
{
	int *arr;
	int range;

	range = abs(end - start) + 1;
	if (!(arr = malloc(sizeof(int) * range)))
		return (NULL);
	while (range--)
		arr[range] = ((end >= start) ? start++ : start--);
	return (arr);
}

int abs(int n)
{
	return ((n < 0) ? -n : n);
}
