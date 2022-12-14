#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute funcations given as paramaner in an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
		action(*(array + i));
		}
}

