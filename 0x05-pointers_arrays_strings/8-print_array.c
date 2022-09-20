#include "main.h"

/**
 * print_array- Print n elements of an array
 * @a: point to array
 * @n: number of elements of the array
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n-1))
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else 
			_putchar(a[i]);
	}
	_putchar('\n');
}
