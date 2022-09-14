#include "main.h"

/**
 *print_alphabet_x10 -prints alphabet ten times
 *Return: Always void
 */

void print_alphabet_x10(void)
{
	char alpha;
	int lines;

	for (lines = 1; lines <= 10; lines++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
