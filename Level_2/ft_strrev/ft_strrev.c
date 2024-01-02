#include <stdlib.h>
#include <stdio.h>

char    *ft_strrev(char *str)
{
	char	temp[100];
	int		len;
	int		i;

	len = 0;
	while (str[len])
	{
		temp[len] = str[len];
		++len;
	}
	--len;
	i = 0;
	while (len >= 0)
	{
		str[i] = temp[len];
		--len;
		++i;
	}
	return (str);
}
