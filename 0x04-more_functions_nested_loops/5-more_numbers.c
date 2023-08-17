#include"main.h"

/**
 *more_numbers - print 0 - 14.
 *Print 10 times.
 *max use of _putchar is 3 times.
 *
 * Return: 0 for success.
*/

void more_numbers(void)
{
	int i, j, count;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			count = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				count = j % 10;
			}
			_putchar(count + 48);
		}
		_putchar('\n');
	}
}
