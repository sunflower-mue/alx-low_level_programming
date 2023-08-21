#include"main.h"

/**
 * _puts - print a string then '\0'.
 *
 * @str: pointer to a string.
 *
 * Return: void.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
