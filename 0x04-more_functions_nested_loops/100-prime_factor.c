#include <stdio.h>

/**
 * main - print largest prime factor of given int.
 *
 * Return: Success 0.
 */


int main(void)
{
	long int x = 612852475143;
	long int i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			x = x / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
