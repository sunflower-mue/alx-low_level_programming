/**
 * _isupper - is c is uppercase
 *
 * @c:parameter of type char
 *
 * Return: 1 if upper, 0 otherwide.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
