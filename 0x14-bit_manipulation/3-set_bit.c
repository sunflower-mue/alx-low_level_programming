#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to an unsigned long int.
 * @index: index to change bit.
 *
 * Return: 1 (Success), -1 (Error).
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n | mask;

	return (1);
}
