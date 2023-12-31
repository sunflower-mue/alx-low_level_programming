#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints an integer n and tells if it's neg, pos or zero.
 *
 * Description: conditions of the main func < 0, > 0 or == 0.
 *
 * Return: 0 for success.
 */

int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if (n > 0)
			printf("%d is positive\n", n);

		else if (n < 0)
			printf("%d is negative\n", n);

		else
			printf("%d is zero\n", n);

		return (0);
	}
