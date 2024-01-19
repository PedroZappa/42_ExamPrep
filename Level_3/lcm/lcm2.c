unsigned int    gcd(unsigned int a, unsigned int b);

/*	Takes two unsigned integers and returns their least common multiple
 *		using the Euclidean Algorithm.
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
 *	If 'a' is divisible by 'b' means 'b' is the gcd 
 *		Returns 'b'.
 *	Else 
 *		Returns itself recursively with 'b' and the remainder of 'a' 
 *		divided 'b' as arguments.
 *	*/
unsigned int    gcd(unsigned int a, unsigned int b)
{
	if ((a % b) == 0)
		return (b);
	return (gcd(b, (a % b)));
}

/*	Euclidian Algorithm's principle :
 *		https://sites.math.rutgers.edu/~greenfie/gs2004/euclid.html
 *	*/
