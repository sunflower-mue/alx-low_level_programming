#include "main.h"

/**
 * _memcpy - copies memory area of @n bytes from @ src to @dest.
 *
 * Description: This function copies elements to new memory loc.
 *
 * @dest: pointer to char.
 * @src: pointer to char
 * @n: unsigned int.
 *
 * Return: A pointer to dest.
 */

char *memcpy(char *dest, char *src, unsigned in n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++
	}

	return (dest);
}
