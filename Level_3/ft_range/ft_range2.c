#include <stdlib.h>

int abs(int n);

/*	ft_range - return an array of integers from start to end, inclusive
 *
 *	Set 'range' with the absolute value of ints in array:
 *		if 'max' is greater than 'min'
 *			Set 'range' to ('max' - 'min')
 *		else
 *			Set 'range' to ('min' - 'max')
 *	Allocate memory for 'arr':
 *	While 'max' is not equal to 'min'
 *		If 'max' is greater than 'min'
 *			Increment 'max'
 *		else
 *			Decrement 'min'
 *		Increment 'arr'
 *	Set the value of the last address pf 'arr' to 'min'
 *	Return ('arr' - 'range')
 *		This is because the pointer 'arr' has been incremented 'range' times 
 *		so subtracting 'range' brings it back to the start of the range.
 *	*/
int	*ft_range(int min, int max)
{
	int	range;
	int	*arr;

	range = abs(max - min);
	if (!(arr = malloc(sizeof(int) * range)))
		return (NULL);
	while (max != min)
		*arr++ = ((max > min) ? min++ : min--);
	*arr = min;
	return (arr - range);
}

int abs(int n)
{
	return ((n < 0) ? -n : n);
}
