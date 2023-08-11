#include <stdio.h>

/**
 * main - prints combination of single digits 0-9.
 * It must be in ascending order.
 * Use only putchar a max of 4 times.
 * No char var.
 *
 * Return: 0 for a successful exec.
 */

int main(void)
{
	int i;
	
	putchar('0');
	for (i = 1; i < 10; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
