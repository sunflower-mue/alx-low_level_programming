#include "main.h"

/**
 *print_last_digit - prints last digit of int.
 *@n: integer param.
 *Return: last digit.
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1*(n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
