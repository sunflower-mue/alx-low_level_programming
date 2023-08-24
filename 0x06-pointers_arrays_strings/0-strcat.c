#include "main.h"

/**
 * _strcat - concatenating two strings.
 * @dest:append to parameter.
 * @src: use to append parameter.
 *
 * Return: pointer to results.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0') /*Finding last indices of dest*/
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
