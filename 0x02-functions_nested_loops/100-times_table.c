#include "main.h"

/**
 *print_times_table - prints n times table from 0.
 *if n > 15 || n < 0, print nothing.
 *@n: our func param of type int.
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n <= 15 || n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				mul = i * j;

				if (mul <= 9)
					_putchar(' ');
				if (mul <= 99)
					_putchar(' ');
				if (mul >= 100)
				{
					_putchar((mul / 100) + 48);
					_putchar((mul / 10) % 10 +48);
				}
				else if (mul <= 99 && mul >= 10)
					_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
