#include <stdlib.h>

int abs(int nb);

int     *ft_rrange(int start, int end)
{
	int *intarr;
	int arrlen;
	int incr_dir;
	int i;

	arrlen = end - start;
	if (arrlen < 0)
		arrlen = abs(arrlen);
	intarr = malloc(sizeof(int) * arrlen);
	if (!intarr)
		return (NULL);
	incr_dir = 1;
	if (end > start)
		incr_dir = -1;
	i = 0;
	while (i <= arrlen)
	{
		intarr[i] = end;
		end = end + incr_dir;
		++i;
	}
	return (intarr);
}

int abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
