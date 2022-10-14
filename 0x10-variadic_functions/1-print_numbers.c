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

	va_start(pa, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(pa, int));
		else if (separator && i == 0)
			 printf("%d", va_arg(pa, int));
		else
			printf("%s%d", separator, va_arg(pa, int));
	}
	va_end(pa);

	printf("\n");
}
