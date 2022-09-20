#include <stdio.h>
/**
 * puts_half - reset argument to 98
 * @s: pointer
 * Return: void
 */

void puts_half(char *s)
{
char *p;
int i;
int l;
int half;
l = 0;
for (p = s; *p != '\0'; p++)
{
l++;
}
if (l % 2 == 0)
{
half = l / 2;
}
else
{
half = (l - 1) / 2;
}
for (i = 0, p = s + half; p != '\0'; i++, p++)
{
printf("%c", *p);
}
printf("\n");
}
