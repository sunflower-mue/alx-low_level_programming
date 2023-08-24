#include "main.h"

/**
 * reverse_string - rev a string.
 * @n: char parameter.
 * Return: nothing.
 */

void reverse_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds two numbers.
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the result buffer
 * Return: a pointer to the result string or NULL.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int of = 0, i = 0, j = 0, dig = 0;
	int val1 = 0, val2 = 0, tt = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || of == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tt = val1 + val2 + of;
		if (tt >= 10)
			of = 1;
		else
			of = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (tt % 10) + '0';
		dig++;
		j--;
		i--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	reverse_string(r);
	return (r);
}
