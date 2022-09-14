#include "main.h"
/**
 * print_sign - prints sign of a numner
 * @check: parameter checks the sign of the numner
 * Return: 1 if greater than z ,return 0 if is =0
 * return -1 if less than 0
 */

int print_sign(int check)
{

	if (check > '0')
	{
		_putchar('+');

		return (1);
	}
	else if (check == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (check < '0')
	{
		_putchar('-');

		return (-1);
	}
}
