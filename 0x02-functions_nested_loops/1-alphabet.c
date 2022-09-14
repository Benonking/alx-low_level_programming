#include "main.h"

/**
 *main - Print alphabet in lover case
 *Return: Always 0
 */

void print_alphabet(void)
{
	int alpha = 'a';

	for (alpha <= 'z')
	{
		_putchar(alpha);
		alpha;
	}
	_putchar('\n');

}
