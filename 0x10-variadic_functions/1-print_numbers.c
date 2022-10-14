#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - print numbers
 * @separator: separotor of nmumbers
 * @n: number of arguments
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	if (n > 0)
	{
		va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(pa);
	}
	printf("\n");
}
