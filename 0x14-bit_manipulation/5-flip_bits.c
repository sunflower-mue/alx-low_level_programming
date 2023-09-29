#include "main.h"

/**
 * flip_bits - Returns the number of bits you need to flip
 * to get from one number to another.
 * @n: uli.
 * @m: uli.
 *
 * Returm: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ n;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
