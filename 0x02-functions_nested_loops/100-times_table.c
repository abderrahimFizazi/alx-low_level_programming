#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_times_table - - prints _putchar, followed by a new line
 * @n : text
 * Return:0 or 1 or -1
 */
void print_times_table(int n)
{

int a = 0;
int b;
int rep;
while (a <= n)
{
	b = 0;
	while (b <= 9)
	{
		rep = a * b;
		if (b == 0)
		{
			_putchar('0' + rep);
		}
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar('0' + rep);
		}
		else
		{
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}

		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		b++;
	}
	_putchar('\n');
	a++;
}
}
