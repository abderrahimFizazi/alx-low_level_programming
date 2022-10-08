#include "main.h"
/**
 * _print_rev_recursion - check the code
 *
 * @s: var
 */
void _print_rev_recursion(char *s)
{
	char *i;
	if (*s != '\0')
	{
	for (i = s; *i != '\0'; i++);
	i--;
	s++;
	_putchar(*i);
	_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
