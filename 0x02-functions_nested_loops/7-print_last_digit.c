#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - - prints _putchar, followed by a new line
 * @n : character to check the case
 * Return:0 or 1 or -1
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
		return (nv);
}
