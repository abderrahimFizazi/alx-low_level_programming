/**
 * _strcat - find the length of a string
 * @dest: pointer to the string to check
 * @src: something here
 * Return: void
 */


char *_strcat(char *dest, char *src)
{
char *p, *k;
for (p = dest; p != '\0'; p++)
;
*p = *src;
for (k = src; k != '\0'; k++, p++)
{
*p = *k;
}
return (*dest);
}
