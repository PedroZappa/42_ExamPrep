#include <stdlib.h>

int ft_strlen(char *str);

char    *ft_strdup(char *src)
{
	char *dup;
	int	len;
	int	i;

	len = ft_strlen(src);
	dup = malloc(sizeof(char) * (len + 1));
	i = -1;
	while (src[++i])
		dup[i] = src[i];
	dup[i] = '\0';
	return (dup);
}

int ft_strlen(char *str)
{
	int len = -1;
	while (str[++len]);
	return (len);
}
