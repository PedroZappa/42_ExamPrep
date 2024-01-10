#include <stdio.h>
#include "ft_strdup.c"

int main(int argc, char *argv[])
{
	char *str;
	char *dup;

	if (argc == 2)
	{
		str = argv[1];
		dup = ft_strdup(str);

		printf("str : %s\n", str);
		printf("dup : %s\n", dup);
	}
	printf("\n");
	return (0);
}
