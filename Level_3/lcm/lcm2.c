unsigned int    gcd(unsigned int a, unsigned int b);

/*	Takes two unsigned integers and returns their least common multiple
 *
 *
 *	*/
unsigned int    lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / gcd(a, b));
}

/*	Calculates the Greatest Common Divisor using the Euclidean algorithm. 
 *		Algorithm's principle : 
 *			the GCD of two numbers also divides their difference. 
 *
 *	If b is zero, it means that a is the GCD : 
 *		the function returns 'a'.
 *	Else 
 *		Returns itself recursively with 'b' and the remainder of 'a' divided 'b' as arguments.
 *	*/
unsigned int    gcd(unsigned int a, unsigned int b)
{
	if (b == 0)
		return a;
	return (gcd(b, (a % b)));
}

/*	Euclidian Algorithm's principle :
 *		https://sites.math.rutgers.edu/~greenfie/gs2004/euclid.html#:~:text=The%20Euclidean%20algorithm%20is%20a,%3D1%C2%B730%2B15.
 *	*/
