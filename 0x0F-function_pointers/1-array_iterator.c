#include "function_pointers"
#include <stdlib.h>
/**
 * array_iterator - execute funcations given as paramaner in an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
		for (i = 0; array[i] < size; i++)
		{
		action(array[i]);
		}
}

