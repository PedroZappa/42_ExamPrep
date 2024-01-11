#include <stdio.h>
#include <stdlib.h>

int get_cd(int num1, int num2);

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d", get_cd(num1, num2));
	}
	printf("\n");
	return (0);
}

int get_cd(int num1, int num2)
{
	if ((num1 > 0) && (num2 > 0))
	{
		while (num1 != num2)
		{
			if (num1 > num2)
				num1 -= num2;
			else
				num2 -= num1;
		}
		return (num1);
	}
	return (0);
}
