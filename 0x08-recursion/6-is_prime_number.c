#include "main.h"

int primeNumber(int p, int divider);
/**
 * is_prime_number - return 1 if n is a prime number else return 0
 * @n: check integer
 * Return: 1 0r 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primeNumber(n, n - 1));
}

/**
 * primeNumber - return prime numner
 * @p: number yo evaluate
 * @div: divider
 * Return: 1 if p is prime 0 if not
 */

int primeNumber(int p, int div)
{
	if (div == 1)
		return (1);

	if (p % div == 0 && div > 0)
		return (0);

		return (primeNumber(p, div - 1));
}
