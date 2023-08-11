#include <stdio.h>

/**
 * main - print a-z, A-Z and newline.
 *
 * Return: 0 for success.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
