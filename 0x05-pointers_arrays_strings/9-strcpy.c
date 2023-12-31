/**
 * _strcpy - copy a string from one pointer to another pointer
 *	including the terminating null byte (\0)
 *
 * @src: source of string parameter.
 * @dest: destination of string parametr.
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
