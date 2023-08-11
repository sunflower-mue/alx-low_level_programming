#include <stdio.h>

/**
 * main -  prints all base 16 digits but lower case a-f.
 * base 16 digits are 0-9,A-F. A total of 16 digits.
 *base16 'a'+1 = b.
 * Return: 0 for succesful operation.
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}

		else
		{
			putchar('a' + i - 10);
		}
	}
	putchar('\n');
	return (0);
}
