#include <stdio.h>
#include <stdlib.h>
#include "print_bits.c"

int main(int argc, char *argv[])
{
	int to_print;

	if (argc == 2)
	{
		to_print = atoi(argv[1]);
		print_bits(to_print);
	}
	printf("\n");
	return (0);
}
