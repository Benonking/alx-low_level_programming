#include "variadic_functions.h"

/**
 * print_strings - print numbers
 * @separator: separotor of nmumbers
 * @n: number of arguments
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	if (n > 0)
	{
		va_start(pa, n);
		for (i = 0; i < n; i++)
		{
			if (va_arg(pa, char *) == NULL)
				printf("(nil)");
			else
				printf("%s", va_arg(pa, char));
			
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(pa);
	}
	printf("\n");
}

