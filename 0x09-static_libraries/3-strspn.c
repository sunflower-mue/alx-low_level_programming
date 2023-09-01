#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: string to check.
 * @accept: string containing the list to match.
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f1, f2;

	f1 = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f2 = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f1++;
				f2 = 1;
			}
		}
		if (f2 == 0)
		{
			return (f1);
		}
	}

	return (0);
}
