#include <stdio.h>
#include <stdlib.h>

/*	Display prime factors of a number.
 *
 *	If 'n' is one print 1.
 *	Loop from n = 2 to 'nbr' while 'n' is smaller than 'nbr' 
 *		If 'nbr' is divisible by 'n' 
 *			Print 'n'.
 *			If 'nbr' is equal to 'n'
 *				Break out of loop.
 *			Print '*'
 *			Divide 'nbr' by 'n'
 *			Set n back to 2.
 *	Print newline.
 *	*/
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
