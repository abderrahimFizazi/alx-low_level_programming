#include <stdio.h>
/**
 * puts2 - reset argument to 98
 * @s: pointer
 * Return: void
 */

void puts2(char *s)
{
char *p;
int i;
int l;
l = 0;
for (p = s; *p != '\0'; p++)
{
l++;
}
for (i = 0, p = s; i < l; i++, p++)
{
if (i % 2 == 0)
{
printf("%c", *p);
}
}
printf("\n");
}
