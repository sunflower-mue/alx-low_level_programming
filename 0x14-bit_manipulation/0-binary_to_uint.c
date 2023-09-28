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
	unsigned int result = 0;
	char current_char = *b;

	if (!b)
		return (0);

	while (current_char != '\0')
	{
		if (current_char != '0' && current_char != '1')
		{
			return (0);
		}

		result = result * 2 + (current_char - '0');
		b++;
	}

	return (result);
}
