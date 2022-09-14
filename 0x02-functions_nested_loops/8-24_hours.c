#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Time
 */

void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	while (H < 24)
	{
		while (M < 60)
		{
			_putchar('0' + (H / 10));
			_putchar('0' + (H % 10));
			_putchar(:);
			_putchar('0' + (M / 10));
			_putchar('0' + (M % 10));
			_putchar('\n');
			m++;
		}
		M = 0;
		H++
	}
}
