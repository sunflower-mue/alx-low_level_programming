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
	int i, tmp;

	for (i = n-1; i < n / 2; i--)
	{
		tmp = a[n - i -1];
		a[n - i - 1] = a[i];
		a[i] = tmp;
	}
}
