#include <stdlib.h>

int abs(int n);

/*	ft_range - return an array of integers from start to end, inclusive
 *
 *	Set 'range' to the absolute value of ints in array:
 *	Allocate memory for 'arr':
 *		Protect memory allocation
 *	While 'end' is not equal to 'start'
 *		If 'end' is greater than 'start'
 *			Increment 'end'
 *		else
 *			Decrement 'start'
 *		Increment 'arr''s value'
 *	Set the value of the last address pf 'arr' to 'start'
 *	Return ('arr' - 'range')
 *		This is because the pointer 'arr' has been incremented 'range' times 
 *		so subtracting 'range' brings it back to the start of the range.
 *	*/
int	*ft_range(int start, int end)
{
	int	range;
	int	*arr;

	range = abs(end - start);
	if (!(arr = malloc(sizeof(int) * range)))
		return (NULL);
	while (end != start)
		*arr++ = ((end > start) ? start++ : start--);
	*arr = start;
	return (arr - range);
}

int abs(int n)
{
	return ((n < 0) ? -n : n);
}
