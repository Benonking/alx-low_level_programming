#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min of range
 * @max: max of range
 * Return: pointer to newly allocated array
 */

int *array_range(int min, int max)
{
	void *a;
	int i;

	if (min > max)
		return (NULL);

	a =  malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		a[i] = min++;

	return (a);
}
