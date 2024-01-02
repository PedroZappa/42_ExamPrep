#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int main(void)
{
	char	*s1 = "Zedro";
	char	*s2 = "Zedr0";

	printf("ft_strcmp:\t%d\n", ft_strcmp(s1, s2));
	printf("strcmp:\t%d\n", strcmp(s1, s2));

	return (0);
}
