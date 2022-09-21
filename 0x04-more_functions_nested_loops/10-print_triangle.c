#include "main.h"
/**
 * print_triangle - check the code.
 * @size: test
*/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for ( j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (j = size - 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
