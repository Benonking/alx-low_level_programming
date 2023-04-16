#include "search_algos.h"
/**
 * jump_search - search for a value in a sorted array using jum search
 * @array: array to be searched
 * @size: size of array
 * @value: target value
 * Return:index of target or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j, prev;
	size_t step = (int)sqrt(size);

	while(i <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
			for(j = i; j >= prev; --j)
			{
				printf("Value checked array[%ld] = [%d]\n", j, array[j]);
				if (array[j] == value)
				{
					return (j);
				}
			}
		}
		prev = i;
		i += step;
	}
	return (-1);
}
