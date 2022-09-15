#include "main.h"
/**
 * print_numbers - Print numberds 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9')
	{
		_putchar(num);
		_putchar('\n');
	}
}
