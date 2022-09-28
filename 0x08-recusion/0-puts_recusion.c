#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		return (s);
	}
	_putchar('\n');
	return (0);
}
