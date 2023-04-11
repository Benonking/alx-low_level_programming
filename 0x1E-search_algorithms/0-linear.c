#include "search_algos.h"

/**
 * linear_search -search for a value in array of ints using linearsearch
 * @array: array to be searched
 * @size: size of array
 * @value: target value
 * Return: -1 if value not present || first index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	for (; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
	}
	return (-1);
}
