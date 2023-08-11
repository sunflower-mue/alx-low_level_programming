#include <stdio.h>

/**
 * main - prints lowercase alphabet followed by newline
 * note 'A' < 'a'.
 *
 * Return: 0 for success.
 */

int main(void)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		putchar('\n');

		return (0);
	}

