/**
 * _strncpy - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: vo
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
