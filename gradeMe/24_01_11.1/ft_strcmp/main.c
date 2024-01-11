#include <stdio.h>
#include "ft_strcmp.c"

int main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hell0";

	printf("ft_strcmp(%s, %s) : ", s1, s2);
	printf("%d\n", ft_strcmp(s1, s2));

	return (0);
}
