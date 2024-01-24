#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi_base.c"
// #include "ft_atoi_base2.c"

int main(int argc, char **argv)
{
	int num;
	int base;

	(void) argc;
	if (argc != 3)
		return (1);
	printf("%s\n", argv[1]);
	base = atoi(argv[2]);
	num = ft_atoi_base(argv[1], base);
	printf("%d\n", num);
	return (0);
}
