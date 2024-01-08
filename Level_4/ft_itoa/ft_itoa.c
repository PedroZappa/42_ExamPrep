#include <stdlib.h>

static long int	ft_numlen(int nbr);
static char		*ft_getstr(char *str, unsigned int nbr, long int len);

char	*ft_itoa(int nbr)
{
	unsigned int	n;	
	long int		len;
	char			*numstr;

	len = ft_numlen(nbr);
	numstr = malloc(sizeof(char) * (len + 1));
	if (!numstr)
		return (NULL);
	numstr[len--] = '\0';
	if (nbr < 0)
	{
		n = -nbr;
		numstr[0] = '-';
	}
	else
		n = nbr;
	if (nbr == 0)
		numstr[0] = '0';
	numstr = ft_getstr(numstr, n, len);
	return (numstr);
}

static long int	ft_numlen(int nbr)
{
	long int	len;

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

static char		*ft_getstr(char *str, unsigned int nbr, long int len)
{
	while (nbr > 0)
	{
		str[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
