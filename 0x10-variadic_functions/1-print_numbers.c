#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int param;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate through all parameter values*/
	for (param = 0; param < n; param++)
	{
		/* get the next parameter value and add it to sum*/
		printf("%d", va_arg(ap, int));
		if (separator && index != n - 1)
		printf("%s", separator);
	/*Clean up*/
	}
	va_end(ap);

	printf("\n");
}
