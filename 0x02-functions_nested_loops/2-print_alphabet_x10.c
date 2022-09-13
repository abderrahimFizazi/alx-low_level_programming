#include "main.h"
/**
 * print_alphabet_x10 - - prints _putchar, followed by a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char x = 'a';
 int  y = 10, i;
for (i = 0; y < 10; i++)
{
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
}
