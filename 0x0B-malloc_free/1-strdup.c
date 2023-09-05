#include <stdlib.h>

#include "main.h"

/**
 * *_strdup - copies a  string.
 * @str: string to duplicate
 *
 * Return: pointer to the copy, NULL if fails.
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	str2 = malloc(sizeof(char) * (len + 1));

	if (str2 == NULL)
		return (NULL);

	while ((str2[i] = str[i]) != '\0')
		i++;

	return (str2);
}
