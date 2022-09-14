#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - - prints _putchar, followed by a new line
 * @n : character to check the case
 * Return:0 or 1 or -1
 */
void print_to_98(int n)
{
int i, m, n;

if (n > 98)
{
for ( i = n; i > 98; i--)
{
m = i;
while (m  > 0)
{
n = m % 10;
m = (m - n) / 10;
_putchar('0' + n);
}
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
}
else
{
for ( i = n; i < 98; i++)
{
m = i;
while (m  > 0)
{
n = m % 10;
m = (m - n) / 10;
_putchar('0' + n);
}
_putchar(',');
_putchar(' ');
}
_putchar('9');
_putchar('8');
}
}
