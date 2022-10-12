#include "function_pointers.h"

/**
 * print_name - print name
 * @name: pointer to name
 * @f: pointer to function which takes char
 * as an argument
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0')
		f(name);
}

void f(char s)
{
	if (s ! = '\0')
		_putchar(s);
}
