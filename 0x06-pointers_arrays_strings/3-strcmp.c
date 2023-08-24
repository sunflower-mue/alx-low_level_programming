#include "main.h"

/**
 * _strcmp - String comparison.
 * @s1: string one param.
 * @s2: string 2 param.
 *
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
