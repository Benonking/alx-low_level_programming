#include "main.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_giagonal(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('\\');

	_putchar('\n');
}
