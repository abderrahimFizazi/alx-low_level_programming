#include "main.h"

/**
 *  string_toupper- function that reverse content of array
 *  @a: array
 *  Return: aaa value here
 */

char *string_toupper(char *a)
{
	    int *p;

	for (p = a; *p != '\0'; p++)
	{
	if (*p > 96 && *p < 123)
	{
		*p = *p - 32;
	}
	}
	return (a);
}
