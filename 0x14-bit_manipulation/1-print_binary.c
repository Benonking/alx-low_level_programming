#include "main.h"

/**
 * print_binary - print a number in binary
 * @n: number
 * Return: Always 0
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_b(n);
}

/**
 * print_b - Prints the binary representation of a number
 * @n: Number to interpret as binary
 */
void print_b(unsigned long int n)
{
	if (n == 0)
		return;
	print_b((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
