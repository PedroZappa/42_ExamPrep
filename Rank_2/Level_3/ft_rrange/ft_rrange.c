#include <stdlib.h>

int ft_abs(int n);

/*	Returns an array of integers ranging from end to start, inclusive.
 *
 *
 *	*/
int     *ft_rrange(int start, int end)
{
	int *arr;
	int arrlen;
	int direction;
	int i;
	
	arrlen = end - start;
	if (arrlen < 0)
		arrlen = ft_abs(arrlen++);
	arr = malloc(sizeof(int) * arrlen);
	if (!arr)
		return (NULL);
	direction = 1;
	if (start < end)
		direction = -1;
	i = 0;
	while (i <= arrlen)
	{
		arr[i] = end;
		end = end + direction;
		++i;
	}
	return (arr);

}

int ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
