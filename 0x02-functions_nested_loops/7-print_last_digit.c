#include "main.h"
/**
 * print_last_digit -print last digit of number
 * @num: Argument to the function
 * Return: last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		num *= -1;

		_putchar('0' + (num % 10));
	}
	else
		return (num % 10);
}
