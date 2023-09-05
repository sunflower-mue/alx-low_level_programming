#include <stdlib.h>

#include "main.h"

/**
 * *create_array - create an array of type char
 * initialize array with a specific char.
 * @size: size of the arry.
 * @c: char to initialize the array c
 *
 * Return: pointer to the array or NULL if size is 0 or fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
