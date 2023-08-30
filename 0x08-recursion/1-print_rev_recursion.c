#include "main.h"

/**
 * _print_rev_recursion - prints a reversed string.
 *@s: pointer to char.
 * Return: Void.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(*s);
}
