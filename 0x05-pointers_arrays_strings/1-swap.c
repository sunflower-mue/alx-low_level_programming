#include "main.h"

/**
 *swap_int - swap int a and int b.
 *@a: pointer to an int.
 *@b: pointer to an int.
 * Return: void that means o
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
