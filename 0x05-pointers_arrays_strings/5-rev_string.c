#include <stdio.h>
/**
 * rev_string - reset argument to 98
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
char *p, *r, temp;
int i;
int l;

l = 0;
for (p = s; *p != '\0'; p++)
{
}
p--;
for (r = s ; r != p; p--, r++)
{
temp = *p;
*p = *s;
*s = temp;
}
printf("\n");
}
