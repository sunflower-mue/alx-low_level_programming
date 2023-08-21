#include"main.h"

/**
 * print_array - print array items.
 *
 * @a: parameter pointer to int.
 * @n: parameter of type int.
 *
 * Return:void.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
