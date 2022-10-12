#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @cmp: pointer to function used
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	if (!cmp || !array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]) 
			return (i);
	}
	return (-1);
}
