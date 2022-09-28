#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string to be printed
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		return;
	}
	s++;
	_puts_recursion(s);
	putchar('\n');
	return (*s);
}
