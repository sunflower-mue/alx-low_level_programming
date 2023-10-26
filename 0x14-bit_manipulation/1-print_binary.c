#include "main.h"

/**
 * print_binary - Prints the binary represantation of a number.
 * @n: Unsigned Long Integer to convert.
 *
 * NO malloc, % or / allowed.
 *
 * Return: No return type.
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int leading_zero = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = bits - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
	}
}
