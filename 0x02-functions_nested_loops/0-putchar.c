#include "main.h"

/**
 *
 * main - prints "_puthar".
 *
 * Description: prototype for putchar. Named _putchar and given.
 *
 * Return: 0 for successful exec.
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');

	return (0);
}
