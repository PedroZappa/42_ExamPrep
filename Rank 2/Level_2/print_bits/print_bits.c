#include <unistd.h>

/*	Initialize 'n' to 8 to print the 8 bits in a byte;
 *	Declare 'bit' to store current bit;
 *	Loop 'n' times through input octet (Left to right):
 *		Isolate the 'n'-th bit:
 *			Right-shift 'octet's bits 'n' times; (octet >> n) 
 *			Mask all bits expect the LSB with a bitwise AND operation; (& 1)
 *			Convert result to ASCII by adding '0' to it;
 *		Write the isolated bit to stdout;
 *
 *	*/
void	print_bits(unsigned char octet)
{
	int				n = 8;
	unsigned char	bit;
	
	while (n--)
	{
		bit = ((octet >> n & 1) + '0');
		write(1, &bit, 1);
	}
}
