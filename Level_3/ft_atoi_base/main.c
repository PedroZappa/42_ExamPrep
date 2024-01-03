#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi_base.c"

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[1]);
	printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	return (0);
}
