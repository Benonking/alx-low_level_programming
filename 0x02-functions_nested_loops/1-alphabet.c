#include "main.h"

/**
 *main - Print alphabet in lover case
 *Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

}
