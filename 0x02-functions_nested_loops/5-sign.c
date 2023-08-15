#include "main.h"

/**
 *print_sign - print +, - or 0 for n>0, n<0 or n==0.
 *@n: parameter of type int.
 *Return: 1 if n > 0, -1 if n < 0, 0 if n == 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
