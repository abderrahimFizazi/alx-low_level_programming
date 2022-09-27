#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the size of the memory to print
 * @n: nnn
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	for (p = s; p < p + n; p++)
		*p = b;
	return (s);
}
