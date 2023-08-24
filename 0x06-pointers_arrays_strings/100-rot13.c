#include "main.h"

/**
 * *rot13 - encoding a string.
 * @str: string of chars.
 *
 * Return: resulting string of chars.
 */
char *rot13(char *str)
{
	char *s;

	s = str;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			char base = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
			*str = (((*str - base) + 13) % 26) + base;
		}
		str++;
	}
	return (s);
}
