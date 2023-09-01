#include <stdio.h>
#include "main.h"

/**
 * main - pri name of file. Must not compile again if renamed.
 * New name should be printed still.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
