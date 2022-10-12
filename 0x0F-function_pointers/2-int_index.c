#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - search for int
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to function cmp
 *
 * Return: -1 if no element, -1 if size <= 0 elae return index of int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
