#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_number - print integer.
 *
 * @n: para of type int.
 *
 * Return: No return type.
 */


void print_number(int n)
{

	unsigned int x = 0;

	if  (n < 0)
	{
		x = -n;
		_putchar('-');
	}

	else
	{
		x = n;
	}

	if (x / 10)
	{
		print_number(x / 10);
	}

	_putchar((x % 10) + '0');
}
