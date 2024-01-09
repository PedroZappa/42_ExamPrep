#include <stdio.h>
#include "sort_int_tab.c"

void print_arr(int *arr, int n);

int main(void)
{
	int n = 9;
	int arr[9] = { 3, 7, 2, 4, 1, 3, 9, 0 , 1 };

	n = 9;
	printf("Unnordered List\n");
	print_arr(arr, n);


	printf("Ordered List\n");
	sort_int_tab(arr, n);
	print_arr(arr, n);
}

void print_arr(int *arr, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", arr[i++]);
		if (i < n)
			printf(", ");
	}
	printf("\n");
}
