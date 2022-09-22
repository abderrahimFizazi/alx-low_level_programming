/**
 * _strncpy - concatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: vo
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
	for (i = 0; i < n ; i++)
	dest[i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
