#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse orde.
 * Return: 0 for successful execution.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	
	return (0);
}
