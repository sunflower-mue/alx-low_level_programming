#include "main.h"

int the_prime(int n, int i);

/**
 * is_prime_number - is the given number a prime number.
 *
 * @n: Number to evaluate.
 *
 * Return: Integer. 1 if true or 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (the_prime(n, n - 1));
}

/**
 * the_prime - The actual value.
 * @n: Value to evaluate.
 * @i: iterator int.
 * Return: 1 if prime, otherwise 0.
 */
int the_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (the_prime(n, i - 1));
}
