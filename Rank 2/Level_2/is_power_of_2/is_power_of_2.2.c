/*	(n && !(n & (n - 1)))
 *	'n' is checked to ensure it's not 0 AND that is not a power of 2.
 *		If 'n' is a power of two, it has only one bit set in binary.
 *			(e.g., 1 (0b0001), 2 (0b0010), 4 (0b0100), 8 (0b1000), etc.).
 *		(n - 1)
 *			Subtracting 1 from 'n' will flip all the bits after the single 
 *			set bit including the set bit 
 *				(e.g., 4 - 1 = 3, in binary: 0b0100 - 0b0001 = 0b0011).
 *		(n & (n - 1))
 *			Performing a bitwise AND between n and (n - 1) will result in 
 *			zero if n is a power of two because there are no common set bits 
 *				(e.g., 0b0100 & 0b0011 = 0b0000).
 *		!(n & (n - 1))
 *			The ! operator is then applied to negate the result.
 *			If 'n' is a power of two, (n & (n - 1)) will be zero,
 *			and !0 evaluates to true (1).
 *			It 'n' is not a power of two, there will be at least one common 
 *			set bit, and (n & (n - 1)) will be non-zero, so the ! will make 
 *			it false.
 *	*/
int	    is_power_of_2(unsigned int n)
{
	return (n && !(n & (n - 1)));
}
