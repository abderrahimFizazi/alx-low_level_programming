/**
 * _puts_recursion - check the code
 *
 * @s: var
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(*s);
	_puts_recursion(*(s--));
	}
}
