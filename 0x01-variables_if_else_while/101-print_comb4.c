#include <stdio.h>

/**
 * main - prints 3 digit numbers.
 * 01 and 10 are the same and smaller one , 01 must be printed.
 * 012, 120, 102, 021, 201, 210 are considered the same combination...
 * of the three digits 0, 1 and 2
 *
 * Return: 0 for successful exec.
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

