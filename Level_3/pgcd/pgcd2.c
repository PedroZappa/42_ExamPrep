#include <stdio.h>
#include <stdlib.h>

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

/*	Takes two integers and displays their greatest common divisor.
 *
 *	Base Case: 
 *		If 'a' is divisible by 'b' (i.e., (a % b == 0)), 
 *			'b' is the GCD, the function returns 'b'.
 *	Recursive Case: 
 *		Calls itself recursively with 'b' and the remainder of 'a' divided by 'b' as arguments. 
 *		
 *		Euclid's algorithm, states that the GCD of two numbers does not change if the larger number is replaced by its difference with the smaller number. 	
 *	*/
int pgcd(int a, int b)
{
	if ((a % b) == 0)
		return (b);
	return (pgcd(b, (a % b)));
}
