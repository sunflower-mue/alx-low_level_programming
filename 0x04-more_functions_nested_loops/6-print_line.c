#include "main.h"
#include <stdio.h>

/**
 * print_line - based on int n, print dash for line.
 * @n : The number of '_' characters toprint
 * Return: no return type
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
