#include"main.h"

/**
 *print_line - printing a straight line.
 *
 *@n: param of int type. 
 *specifies how many times _ should be printed
 *Return: void for nothing.
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
