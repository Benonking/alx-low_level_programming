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
	char *s;

	if (n > 0)
	{
		va_start(pa, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(pa, char *);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(pa);
	}
	printf("\n");
}

