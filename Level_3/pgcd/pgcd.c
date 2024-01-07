#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		if ((a > 0) && (b > 0))
		{
			while (a != b)
			{
				if (a > b)
					a -= b;
				else
					b -= a;
			}
			printf("%d\n", a);
		}
	}
	printf("\n");
	return (0);
}
