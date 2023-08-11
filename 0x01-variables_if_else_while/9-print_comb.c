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
	
	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
