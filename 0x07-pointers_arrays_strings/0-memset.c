#include "main.h"

/**
 * _memset - fills memory with a contanst byte.
 * @s: parameter pointer to a char.
 * @b: parameter of type char.
 * @n: unsigned int param.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
