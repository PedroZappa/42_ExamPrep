#include <stdio.h>
#include "reverse_bits.c"
#include "../print_bits/print_bits.c"

int main()
{
	unsigned char octet = 0b00100110;
	print_bits(octet);	
	printf("\n");

	unsigned char rev = reverse_bits(octet);
	print_bits(rev);	

	return (0);
}
