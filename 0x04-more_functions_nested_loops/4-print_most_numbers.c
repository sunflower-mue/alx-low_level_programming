#include"main.h"

/**
 *print_most_numbers - print 0 - 9.
 *exclude 2 and 4 and you can
 *max  use of _putchar is 2.
 * Return:0 for success.
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
