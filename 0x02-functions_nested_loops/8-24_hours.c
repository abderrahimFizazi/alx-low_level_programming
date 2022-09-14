#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - - prints _putchar, followed by a new line
 * Return:0 or 1 or -1
 */
void jack_bauer(void)
{
int x, y, z, k;
for (x = 0; x < 3; x++)
{
for (y = 0; y < 10; y++)
{
_putchar('0' + x);
_putchar('0' + y);
_putchar(':');
for (z = 0; z < 6; z++)
{
for (k = 0; k < 10; k++)
{
_putchar('0' + z);
_putchar('0' + k);
_puctchar('\n');
}
}
}
}
}


