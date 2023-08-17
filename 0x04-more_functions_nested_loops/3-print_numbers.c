#include"main.h"

/**
 *print_numbers - print digits 0 - 9
 *max use of _putchar 2.
 *
 * Return:0 (success)
*/

void print_numbers(void)
{
	int n = 0;

	do {
		_putchar(n + 48);
		n++;
	} while (n >= 0 && n <= 9);
	_putchar('\n');
}
