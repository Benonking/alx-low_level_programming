#include "main.h"
/**
 * _atoi- convert String to float
 * @s: string to be converted
 * Return: interger
 */

int _atoi(char *s)
{
	unsigned int tens, digit, positive;
	double t_beg = 1;

	if (positive == 0)
		_putchar('0');
	else
	{
		if (positive < 0)
		{
			positive = positive * -1;
			_putchar('-');
		}

		while (t_beg <= positive)
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
