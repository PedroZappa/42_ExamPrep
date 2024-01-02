#include <stdio.h>
#include "is_power_of_2.c"

int main(void)
{
	unsigned int n[3] = { 4, 1024, 40 };
	int res;
	int i;

	i = 0;
	res = 0;
	while (i < 3)
	{
		res = is_power_of_2(n[i]);
		printf("n = %d => %d\n", n[i], res);
		++i;
	}
	
	return (0);
}
