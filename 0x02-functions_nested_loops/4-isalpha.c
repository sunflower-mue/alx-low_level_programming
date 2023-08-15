#include "main.h"

/**
 *_isalpha - check for alphabet characters.
 *@c: parameter of type int.
 *Return: 1 if c is lettrer,lowercase or uppercase
 *	0, otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (1);
	return (0);
}
