/**
 * rev_string - string reversing.
 *
 * @s: string parameter.
 *
 * Return: void
*/

void rev_string(char *s)
{
	int len, i;
	char ch;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len / 2; i++)
	{
		ch = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = ch;
	}

}
