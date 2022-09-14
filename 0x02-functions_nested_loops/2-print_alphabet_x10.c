#include "main.h"

/**
 *print_alphabet_x10 -prints alphabet ten times
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int lines;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (lines = 1; lines <= 10; lines++)
		{
			_putchar('\n');
		}
		_putchar(alpha);
	}
	_putchar('\n');

	return (0);
}
