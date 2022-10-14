#include "variadic_fiunctions.h"

/**
 * sum_them_all - sum all paramaters
 * @n: number of arguments
 * ...: other paramaters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	Va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
