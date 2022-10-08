#include "main.h"
/**
 * factorial - check the code
 * Return: int
 * @n: var
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (factorial(n - 1) * n);
	}
	else if (n == 1 || n == 0)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
}
