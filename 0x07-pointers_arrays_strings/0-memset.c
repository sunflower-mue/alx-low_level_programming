/**
 * _memset - fills memory with a contanst byte.
 * @s: paramete pointer to an int.
 * @b: parameter of type char.
 * @n: unsigned int param.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(int *s, char b, unsigned int n)
{
	char *ptr = s;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);
}
