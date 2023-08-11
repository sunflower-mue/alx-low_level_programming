#include <stdio.h>

/**
 * main - prints single digit units of base 10 only using putchar.
 * no char variable allowed.
 *
 * Return: 0 for successful exec.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');
	return (0);
}
