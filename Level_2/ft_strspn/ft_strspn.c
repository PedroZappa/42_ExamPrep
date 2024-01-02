#include <stdlib.h>

char *ft_strchr(const char *str, char c);

size_t ft_strspn(const char *s, const char *accept) 
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

char *ft_strchr(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		++str;
	}
	return (0);
}
