#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi_base.c"

int main(int argc, char *argv[])
{
	char	*strnum;
	int		base;
	int		integer;

	if (argc == 3)
	{
		strnum = argv[1];
		base = ft_atoi_base(argv[2], 10);
		if (base < 2 || base > 16)
			return (1);
		integer = ft_atoi_base(strnum, base);

		printf("%s\n", strnum);
		printf("%d\n", integer);
	}
	return (0);
}
