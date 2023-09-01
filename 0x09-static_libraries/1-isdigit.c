/**
 *_isdigit - is digit between 0 - 9
 *
 * @c: parameter of type int.
 *
 * Return: 1 if is digit0 otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
