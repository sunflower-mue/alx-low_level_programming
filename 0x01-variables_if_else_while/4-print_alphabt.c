#include <stdio.h>

/**
 * main - prints lowercase alphabets excluding q and e.
 * why && and not || ?
 * Return: 0 for successful operation.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
