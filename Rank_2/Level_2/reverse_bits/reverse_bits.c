/*	Declare and Initialize 're' to hold the reverse of 'octet';
 *	Declare and initialize 'n_bits' to 8;
 *	While 'n_bits' is greater than 0:
 *		Left-shift 'rev' by 1: (rev << 1);
 *		Extract the LSB of 'octet': (octet & 1);
 *		Perform bitwise OR: (rev |= (octet & 1));
 *			Adding the bit to the LSB of 'rev'
 *		Right-shift 'octet' by 1: (octet >>= 1);
 *			Gets the next bit to process in the next loop iteration
 *	Return 'rev';
 *	*/
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev = 0;
	unsigned		n_bits = 8;
	
	while (n_bits--)
	{
		rev <<= 1;
		rev |= (octet & 1);
		octet >>= 1;
	}
	return (rev);
}
