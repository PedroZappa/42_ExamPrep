#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	int nbr;
	int n;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr == 1)
			printf("1");
		n = 2;
		while (nbr >= n)
		{
			if ((nbr % n) == 0)
			{
				printf("%d", n);
				if (nbr == n)
					break;
				printf("*");
				nbr /= n;
				n = 2;
			}
			++n;
		}

	}
	printf("\n");
	return 0;
}
