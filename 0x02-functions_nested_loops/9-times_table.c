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
int i, j, k;

for (i = 0; i <  10; i++)
{
for (j=0; j < 10; j++)
{
k = i * j;
_putchar(k);
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
