#include <stdio.h>
#include <stdlib.h>
#include "is_power_of_2.c"

int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", is_power_of_2(atoi(argv[1])));
	return (0);
}
