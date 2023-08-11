#include <stdio.h>

/**
 * main - prints all possible combinations of two digits.
 * Only allowe to use putchar and only 5 times.
 * no char variables declared.
 * 01 - 09 for single digits.
 * 01 and 10 are the same, print the smallest only, 01.
 * 41 to be skipped because 14 is printed.
 * Return: 0 for successful exec.
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <  10; i++)
	{
		for (j = i + 1; j < 10; j++ )
		{
			putchar('0' + i);
			putchar('0' + j);
			if ( i != 8 && j != 9)
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
