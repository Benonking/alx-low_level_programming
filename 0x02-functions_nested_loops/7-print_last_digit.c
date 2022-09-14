#include "main.h"
/**
 * print_last_digit -print last digit of number
 * @num: Argument to the function
 * Return: last digit
 */

int print_last_digit(int num)
{

	int last = num % 10;

	if (last < 0)
		num *= -1;
	_putchar(last + '0');
	return (last);
}
