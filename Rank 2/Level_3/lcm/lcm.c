/*	Takes two unsigned integers and returns their least common multiple
 *
 *	If a or b is 0, returns 0
 *	If a is greater than b:
 *		Set 'max' to 'a'
 *	Else
 *		Set 'max' to 'b'
 *	Loop while incrementing 'max':
 *		if 'max' is divisible by 'a' and 'b':
 *			return 'max'
 *	*/
unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int max;

	if (a == 0 || b == 0)
		return 0;
	if (a > b)
		max = a;
	else
		max = b;
	while (1)
	{
		if ((max % a == 0) && (max % b == 0))
			return max;
		++max;
	}
}
