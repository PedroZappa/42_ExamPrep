#include <stdio.h>
#include <stdlib.h>
#include "ft_strcpy.c"

int main(int argc, char **argv)
{
	char *str = NULL;
	char *cpy = malloc(100);

	if (argc == 2)
	{
		str = argv[1];
		cpy = ft_strcpy(cpy, str);
		printf("copy : %s", cpy);
	}
	printf("\n");
	return (0);
}
