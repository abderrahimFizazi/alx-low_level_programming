#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
        int i = 0, sum = 0;

	va_list args;

	va_start(args, n);
	if (n != 0)
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	}
	va_end(args);
	return (sum);
}
