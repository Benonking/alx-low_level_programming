#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: if nmemb of size =  0 then return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(sizeof(size * nmemb));

	if (a == NULL)
		return (NULL);

	/*set allocated men to 0 */

	for (i = 0; i < nmemb * size; i++)
		*((char *)a + i) = 0;

	return (a);
}
