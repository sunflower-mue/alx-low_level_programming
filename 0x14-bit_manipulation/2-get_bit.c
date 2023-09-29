#include "main.h"

/**
 * get_bit - return the value of a bit at a given index.
 * @n: unsigned long int.
 * @index: index.
 *
 * Return: Value of the bit at index. -1 for error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

