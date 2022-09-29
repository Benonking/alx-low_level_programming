#include "main.h"

int sqr_recursion(int n, int i);
/**
 * _sqrt_recursion - print natural  sqaure root of n
 * @n: number
 * Return: xsquare root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_recursion(n, 0));
}
/**
 * sqr_recursion - sqaurea number
 * @n: square of a number
 * @i: square root of n
 * Return: sqaure
 */

int sqr_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqr_recursion(n, i + 1));
}
