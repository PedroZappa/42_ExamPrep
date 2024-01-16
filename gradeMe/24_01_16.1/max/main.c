#include <stdio.h>
#include <stdlib.h>
#include "max.c"

int main(void)
{
	int nums[7] = { 4, 7, 2, 77, 42, 100, 0 };
	int len = 7;
	int max_n;

	max_n = max(nums, len);

	printf("%d\n", max_n);
	return (0);
}
