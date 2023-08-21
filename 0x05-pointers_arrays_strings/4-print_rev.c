#include"main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @s: pointer parameter.
 *
 * Return: void.
*/

void print_rev(char *s)
{
	if (s == NULL)
	{
		return; /* Handle NULL pointer*/
	}

	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
