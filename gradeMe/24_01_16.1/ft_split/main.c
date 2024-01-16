#include <stdio.h>
#include "ft_split.c"

int main(int argc, char **argv)
{
	char **strs;
	char *str;
	int i;

	if (argc == 2)
	{
		str	= argv[1];
		printf("str : %s\n", str);

		strs = ft_split(str);
		i = 0;
		printf("Split strs :\n");
		while (strs[i])
			printf("%s\n", strs[i++]);
	}
	return (0);
}
