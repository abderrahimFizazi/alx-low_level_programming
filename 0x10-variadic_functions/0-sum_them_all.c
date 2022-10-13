#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - executes a function given as a parameter
 * on each element of an array
 * @n: array to iterate over
 * Return: size of the array
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
