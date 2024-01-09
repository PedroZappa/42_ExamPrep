#include <stdio.h>
#include "max.c"

int main(void)
{
	int tab[5] = { 2, 6, 42, 9, 3 };
	int n = 5;
	int i;
	int max_val;

	printf("Tab:\n");
	i = 0;
	while (i < n)
		printf("%d ", tab[i++]);
	printf("\n");
	
	max_val = max(tab, n);
	printf("Max = %d", max_val);
	printf("\n");

	return (0);
}
