#include <stdio.h>
/**
 * _puts - reset argument to 98
 * @str: pointer
 * Return: void
 */

void _puts(char *str)
{
char *p;
for (p = str; *p != '\0'; p++)
{
printf("%c",*str);
}
}
