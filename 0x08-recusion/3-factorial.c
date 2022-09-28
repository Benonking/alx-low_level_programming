#include "main.h"

/**
 * factorial- return factorial of a given nummber
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
