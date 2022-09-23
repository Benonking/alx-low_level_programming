#include "main.h"

/**
 * print_number -print a number
 * @n: number
 * Return : Always 0
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('0');
	else
		_putchar(n);
}
