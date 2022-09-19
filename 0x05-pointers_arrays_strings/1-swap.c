#include "main.h"

/**
 * swap_int - swap two integers
 * @a: argument to the function
 * @b: argument to the function
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a= *b;
	*b = x;
}
