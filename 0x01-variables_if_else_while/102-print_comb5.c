#include <stdio.h>

/**
 * main - print two two digit numbers from 01 to 99.
 * ascending order.
 * 00 01, 00 02, etc.
 * only use putchar a max of 8 times.
 * 00 01 and 01 00 are considered as the same combination of the nms 0 and 1.
 * Return: 0 for successful execution.
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
