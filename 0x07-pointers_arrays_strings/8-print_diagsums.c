#include "main.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix.
 * matrix of type int.
 * @a: pointer to start of matrix.
 * @size: col size.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, l = 0, m = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		l += *(a + k);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		m += *(a + k);
	}
	printf("%i, %i\n", l, m);
}
