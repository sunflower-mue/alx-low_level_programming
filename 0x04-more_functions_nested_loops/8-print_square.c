#include "main.h"

/**
 * print_square - prints a square.
 *@size: param of type int.
 * Return: void is nothing.
 */

void print_square(int size)
{
	int i;
	int j;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
