#include "main.h"

/**
 *_strlen - returns length of a string.
 *@s: a pointer to an int.
 *
 *Return: length of string.
 */

int _strlen(char *s)
{
	int u;

	len = 0;
	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
