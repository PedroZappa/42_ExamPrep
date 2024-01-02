#include <stdio.h>
#include "ft_strdup.c"

int main(void)
{
	char *str = "Zedro 42";
	char *dup;

	dup = ft_strdup(str);
	printf("str : %s\n", str);
	printf("ft_strdup : %s\n", dup);

	return (0);
}
