#include <stdio.h>
#include <string.h>
#include "ft_strpbrk.c"

int main(void)
{
	char *s = "abaaaZ";
	char *accept = "Zzb Top";
	char *found = NULL;

	printf("str address : %p\n", s);
	printf("str value : %s\n", s);

	printf("accept values : %s\n", accept);

	found = ft_strpbrk(s, accept);
	printf("found : %c\n", *found);
	printf("at address : %p\n", found);
	
	return (0);
}
