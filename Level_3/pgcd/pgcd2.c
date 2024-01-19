#include <stdio.h>
#include <stdlib.h>
/*	Takes two integers and displays their greatest common divisor.
*	*/
int pgcd(int a, int b);

int main(int argc, char *argv[])
{
	int a; 
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", pgcd(a, b));
	}
	return (0);
}

int pgcd(int a, int b)
{
	if ((a % b) == 0)
		return (b);
	return (pgcd(b, (a % b)));
}
