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
	f(name);
}

void f(char s)
{
	_putchar(s);
}
