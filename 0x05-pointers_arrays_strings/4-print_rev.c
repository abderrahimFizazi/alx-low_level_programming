#include <stdio.h>
/**
 * print_rev - reset argument to 98
 * @s: pointer
 * Return: void
 */

void print_rev(char *s)
{
char *p;
int i;
int l;

l = 0;
for (p = s; *p != '\0'; p++)
{
l++;
}
for (i = 0; i < l; i++, p--)
{
printf("%c", *p);
}
printf("\n");
}
