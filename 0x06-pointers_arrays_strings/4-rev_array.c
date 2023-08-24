#include "main.h"

/**
 * reverse_array - reverse int array.
 *
 * @a: array parameter.
 * @n: array size.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
