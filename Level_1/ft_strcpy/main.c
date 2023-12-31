#include <stdio.h>
#include <stdlib.h>
#include "ft_strcpy.c"

int main(int argc, char **argv)
{
	char    *s1 = malloc(100);

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (1);
	}

	s1 = ft_strcpy(s1, argv[1]);
	printf("%s\n", s1);
	free(s1);
	return (0);
}
