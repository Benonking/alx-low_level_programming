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
	int *a;
	int i;
	int num = (max - min + 1);

	if (min > max)
		return (NULL);

	a =  malloc(sizeof(int) * num);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
		a[i] = min++;

	return (a);
}
