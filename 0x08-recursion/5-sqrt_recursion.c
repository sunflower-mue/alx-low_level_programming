#include "main.h"

int squareroot_guess(int n, int i);

/**
 * _sqrt_recursion - Returns the naturla squareroot of a number.
 * @n: integer parameter.
 * Return: Integer Squareroot on n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot_guess(n, 0));
}

/**
 * squareroot_guess - n = k^2.
 * @n: number to use.
 * @i: Iterator.
 * Return: THe squareroot int.
 */
int squareroot_guess(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot_guess(n, i + 1));
}
