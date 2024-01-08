#include <stdio.h>
#include "ft_itoa.c"

int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_itoa(atoi(argv[1])));
	else
		printf("Usage: ./a.out <number>\n");
	return 0;
}
