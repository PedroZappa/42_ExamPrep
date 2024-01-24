#include <stdlib.h>

char *ft_strchr(const char *str, char c);

size_t ft_strspn(const char *s, const char *accept) 
{
	int len;
	
	len = 0;
	while (s[len])
	{
		if (ft_strchr(accept, s[len]) == 0)
			break;
		++len;
	}
	return (len);
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
