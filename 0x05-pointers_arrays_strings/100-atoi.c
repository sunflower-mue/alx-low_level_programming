/**
 * _atoi - convertngs a string to an integer.
 *
 * @s:parameter pointer to int.
 *
 * Return: int.
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int j = 1;

	do {
		if (*s == '-')
			j *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * j);
}
