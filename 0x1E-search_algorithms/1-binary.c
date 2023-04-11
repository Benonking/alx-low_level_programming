#include "search_algos.h"
/**
 * print - print array
 * @array: array to print
 * @idx: index
 * @size: size of array
 * Return: 0 on Sucess
 */
void print(int *array, size_t idx, size_t size)
{
	printf("Searching in array: ");
	for (; idx < size + 1; idx++)
	{
		printf("%d", array[idx]);
		if (idx < size)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for a value in sorted array of integers
 *	using Binary search
 * @array: array to be serached
 * @size: size of array
 * @value: target value
 * Return: -1 if NULL or if the value is not in array | return index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx = 0, mid;

	size = size - 1;

	if (!array)
	{
		return (-1);
	}

	for (; idx <= size;)
	{
		print(array, idx, size);
		mid = (idx + size) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			idx = mid + 1;
		}
		if (array[mid] > value)
		{
			size = mid - 1;
		}
	}
	return (-1);
}
