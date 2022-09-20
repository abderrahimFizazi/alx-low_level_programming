/**
 * _puts - reset argument to 98
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
char *p;
int l;
l = 0;
for (p = str; *p != '\0'; p++)
{
putc(*str);
}
return (l);
}
