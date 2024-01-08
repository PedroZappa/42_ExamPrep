#include <stdio.h>
#include "ft_split.c"

int main(int argc, char **argv)
{
	char **strtab;
	int i;

	if (argc == 2)
	{
		strtab = ft_split(argv[1]);
		if (strtab)
		{
			i = 0;
			while (strtab[i])
				printf("%s\n", strtab[i++]);
			free(strtab);
		}
		else
			return (1);
	}
	else
		printf("Usage: ./split \"string to be split\"\n");
	return (0);
}
