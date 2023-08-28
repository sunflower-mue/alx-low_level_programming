#include "main.h"
/**
 * _memset - fills memory with a contanst byte.
 * @s: paramete pointer to an int.
 * @b: parameter of type char.
 * @n: unsigned int param.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(int *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b; /*remember string is an arr*/
	}
	return (s);
}
