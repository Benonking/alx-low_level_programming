#include "main.h"
/**
 * times_table- pritn the n times tabe
 * Return: table
 */

void times_table(void)
{
	int column;
	int rows;
	int pdt;
	for (column = 0; column <= 9; column++)
	{
		_putchar('0');

		for (rows = 0; rows <= 9; rows++)
		{
			pdt= rows * column;

			if (column == 0)
			{
				_putchar('0' + pdt);
			}
			else if (pdt <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + pdt);
			}
			else if (pdt > 9)
			{
				_putchar(',');
                                _putchar(' ');
                                _putchar('0' + (pdt / 10));
				_putchar('0' + (pdt % 10));
			}
		}
		_putchar('\n');
	}
}
