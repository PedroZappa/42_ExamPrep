#include <stdio.h>
#include <stdlib.h>

/*	Takes two integers and displays their greatest common divisor.
 *
 *	If 'a' and 'b' are positive
 *		while 'a' is different from 'b'
 *			if 'a' is greater than 'b'
 *				'a' = 'a' minus 'b'
 *			else
 *				'b' = 'b' minus 'a'
 *		Print a newline
 *	*/
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
