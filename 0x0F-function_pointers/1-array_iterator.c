#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: name to print
 * @action: test
 * @size: pointer to the printing function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
