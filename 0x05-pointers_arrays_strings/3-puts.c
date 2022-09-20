#include "main.h"
/**
 * _puts - prints a string
 * @str: argument to the function
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		 _putchar(*str++);
	}
	_putchar('\n');
}
