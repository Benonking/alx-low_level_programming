#include "main.h"

/**
 * print_diagsums - Print the sum of diagonals of a square matrix
 * @a: array for the square
 * @size: size of square
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int row, i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)/*row*/
	{
		row = (i  * size) + i;
		sum1 = sum1 + a[row];
	}

	for (j = 0; j < size; j++)/*col*/
	{
		col = (j * size) + 1;
		sum2 = sum2 + a[col];
	}

	printf("%d, %d\n", sum1, sum2)
	}
