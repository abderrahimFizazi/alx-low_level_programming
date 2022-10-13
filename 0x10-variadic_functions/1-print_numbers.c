#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int param;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate through all parameter values*/
	for (param = 0; param < n - 1; param++)
	{
		/* get the next parameter value and add it to sum*/
		printf("%d", va_arg(ap, int));
		printf("%c", *separator);
	/*Clean up*/
	}
	printf("%d", va_arg(ap, int));
	va_end(ap);

	return (sum);
}
