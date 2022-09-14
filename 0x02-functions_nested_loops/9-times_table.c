#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - - prints _putchar, followed by a new line
 * Return:0 or 1 or -1
 */
void times_table(void)
{
int i, j, k, l, m;

for (i = 0; i <  10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if (k > 9)
{
l = k % 10;
m = (k - l) / 10;
_putchar('0' + m);
_putchar('0' + l);
}
else
{
_putchar(' ');
_putchar('0' + k);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
