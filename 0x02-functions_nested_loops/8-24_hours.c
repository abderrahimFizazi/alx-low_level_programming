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
int x, y;

for (x = 0; x < 24; x++)
{
if (x < 10)
{
_putchar('0');
_putchar('0' + x);
}
else
_putchar('0' + x);
_putchar(':');
for (y = 0; y < 60; y++)
{
if (x < 10)
{
_putchar('0');
_putchar('0' + y);
else
_putchar('0' + y);
}
}
}
