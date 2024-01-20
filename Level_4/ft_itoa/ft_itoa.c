#include <stdlib.h>

static int		ft_numlen(int nbr);
static char		*ft_getnumstr(char *str, unsigned nbr, int len);

/*	Converts an integer int oa string of ASCII characters.
 *
 *	Get the length of input 'nbr'
 *	Allocate memory for 'numstr' of length 'len + 1'
 *	If 'nbr' is negative
 *		Add '-' to index 0 of 'numstr'
 *		Get the absolute value of 'nbr'
 *	If 'nbr' is 0
 *		Set index 0 of 'numstr' to '0'
 *		Return the string
 *	Set the last byte of 'numstr' to '\0'
 *		Decrement 'len'
 *	Get the converted 'numstr'
 *	Return 'numstr'
 *	*/
char	*ft_itoa(int nbr)
{
	char	*numstr;
	int		len;

	len = ft_numlen(nbr);
	numstr = malloc(sizeof(char) * (len + 1));
	if (!numstr)
		return (NULL);
	if (nbr < 0)
	{
		numstr[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		numstr[0] = '0';
		return (numstr);
	}
	numstr[len--] = '\0';
	numstr = ft_getnumstr(numstr, nbr, len);
	return (numstr);
}

/*	Get the length of 'nbr'
 *
 *	Set 'len' to 0
 *	If 'nbr' is negative
 *		Set 'len' to 1 to count the '-'
 *	Loop while number is not 0
 *		Divide 'nbr' by 10
 *		Increment 'len'
 *	Return 'len'
 *	*/
static int	ft_numlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len = 1;
	while (nbr)
	{
		nbr /= 10;
		++len;
	}
	return (len);
}

/*	Get the converted 'numstr'
 *
 *	Loop while 'nbr' is bigger than 0
 *		Get the remainder of 'nbr' by 10
 *			Add '0' to 'numstr' at index 'len'
 *			Decrement 'len'
 *		Divide 'nbr' by 10
 *	Return 'numstr'
 *	*/
static char		*ft_getnumstr(char *numstr, unsigned nbr, int len)
{
	while (nbr > 0)
	{
		numstr[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (numstr);
}
