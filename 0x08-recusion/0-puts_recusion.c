#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	_putchar('\n');
	s++;
	_puts_recursion(s)
}
