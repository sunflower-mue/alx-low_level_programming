#include "main.h"

/**
*print_line - printing a straight line.
*@n:parameter of type int.
*Return:returns nothing, void type.
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
