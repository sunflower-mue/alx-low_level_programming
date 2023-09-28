#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to the string of 0 and 1 chars.
 *
 * Return: The converted number
 * 0 if b is NULL or contains chars not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	unsigned int j = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	while (i >= 0)
	{
		if (b[i] == '1')
			result += j;
	j *= 2;
	i--;
	}
	return (result/2);
}
