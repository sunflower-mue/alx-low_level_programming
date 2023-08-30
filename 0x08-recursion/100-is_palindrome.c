#include "main.h"

int _pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - is string a palindrome.
 * @s: string toevaluate.
 *
 * Return: 1 if true, 0 otherwise.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - finds length of the string.
 * @s: strin to evaluate.
 *
 * Return: length of string integer.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _pal - recursive check for palindrome.
 * @s: string to evaluate.
 * @i: iterator.
 * @len: length of the string.
 *
 * Return: 1 if true, 0 otherwisw.
 */
int _pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_pal(s, i + 1, len - 1));
}
