#include <stdio.h>
#include "ft_strrev.c"

int main(void)
{
	char str[100] = "Zedro 42";
	char *rev = NULL;

	rev = ft_strrev(str);
	printf("%s\n", rev);

	return (0);
}
