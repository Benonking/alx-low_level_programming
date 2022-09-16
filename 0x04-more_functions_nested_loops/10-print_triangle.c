#include "main.h"

/*
 * print_triangle - Print triagle
 * @size: argument of function
 */

void print_triangle(int size)
{
	int width, j;

	for (width = 0; width <= size; width++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - width - 1)
			{
				_putchar(" ");
			}
			else
			{
				_putchar('#');
			}
		}
		if (size < 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
}
