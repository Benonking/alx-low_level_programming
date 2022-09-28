#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
