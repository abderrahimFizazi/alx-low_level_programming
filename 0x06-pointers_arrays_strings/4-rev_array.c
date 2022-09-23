#include "main.h"
/**
 * reverse_array - find the length of a string
 * @a: pointer to the string
 * @n: pointer
 * Return: destination
 */

void reverse_array(int *a, int n)
{
	int i, j, temp, half;

	if (n % 2 == 0)
	{
		half = n / 2;
	}
	else
	{
		half = (n - 1) / 2;
	}
	for (i = 0, j = n - 1; i != j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
