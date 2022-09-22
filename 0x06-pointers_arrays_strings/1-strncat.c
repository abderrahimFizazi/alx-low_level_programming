/**
 *_strncat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n : nmr
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = -1, i;

	for (i = 0; dest[i] != '\0'; i++)
	;
	do {
	a++;
	dest[i] = src[a];
	i++;
	} while (src[a] != '\0' && a < n - 1);

	return (dest);
}
