#include "main.h"

/**
 * *rot13 - encoding a string.
 * @str: string of chars.
 *
 * Return: restrulting string of chars.
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && s[i] <= 'z') ||
				(str[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && s[i] <= 'm') ||
					(str[i] >= 'A' && s[i] <= 'M'))
				str[i] += 13;
			elstre
				str[i] -= 13;
			i++;
		}
		i++;
	}
	return (str);
}
