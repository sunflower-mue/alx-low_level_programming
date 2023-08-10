#include <unistd.h>

/**
 * main - entry point
 * Description: printing a quote without using man(3) printf or puts.
 * Return: program terminates with exit status 1 - error.
 */

int main(void)
	{
		write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
		return (1);
	}

