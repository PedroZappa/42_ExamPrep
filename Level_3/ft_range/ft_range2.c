#include <stdlib.h>

int abs(int n);

/*	ft_range - return an array of integers from start to end, inclusive
 *
 *	Set 'n' with the absolute value of ints in array:
 *		if 'max' is greater than 'min'
 *			Set 'n' to ('max' - 'min')
 *		else
 *			Set 'n' to ('min' - 'max')
 *	Allocate memory for 'arr':
 *	While 'max' is not equal to 'min'
 *		If 'max' is greater than 'min'
 *			Increment 'max'
 *		else
 *			Decrement 'min'
 *		Increment 'arr'
 *	Set 'arr' to 'min'
 *	Return ('arr' - 'n')
 *		This is because the pointer 'arr' has been incremented 'n' times 
 *		so subtracting 'n' brings it back to the start of the range.
 *	*/
int	*ft_range(int min, int max)
{
	int	n;
	int	*arr;

	n = abs(max - min);
	if (!(arr = malloc(sizeof(int) * n)))
		return (NULL);
	while (max != min)
		*arr++ = ((max > min) ? min++ : min--);
	*arr = min;
	return (arr - n);
}

int abs(int n)
{
	return ((n < 0) ? -n : n);
}
