#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memeory using malloc
 * @b: int to be allocated memory at runtime
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *q = malloc(b);
	if (q == NULL)
		exit(98);
	return (q);
}
