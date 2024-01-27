/*	(octect << 4)
 *		Left-shifts octect by 4 positions to the left
 *		Moving the low nibble to the position of the high nibble
 *		Bits shifted beyond the MSB are lost
 *	(octect >> 4)
 *		Right-shifts octect by 4 positions to the right
 *		Moving the high nibble to the position of the low nibble
 *		Bits shifted beyond the LSB are lost
 *	(octect << 4) | (octect >> 4)
 *		Since there is no overlap between the high and low nibbles
 *		the OR operation simply combines the high and low nibbles together
 *	*/
unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}
