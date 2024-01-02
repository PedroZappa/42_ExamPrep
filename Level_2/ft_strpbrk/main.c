#include <stdio.h>
#include <string.h>
#include "ft_strpbrk.c"

int main(void)
{
	char *s = "aaaaZ";
	char *accept = "Zz Top";
	char *found = NULL;

	found = ft_strpbrk(s, accept);
	printf("%p", found);
	
	return (0);
}
