#include "main.h"

/**
 * *rot13 - encoding a string.
 * @s: string of chars.
 *
 * Return: restrulting string of chars.
 */
char *rot13(char *s)
{
	int count, i;

	count  = 0;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alph[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
