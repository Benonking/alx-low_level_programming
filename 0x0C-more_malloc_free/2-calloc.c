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
	void *a[];

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(sizeof(size) * (nmemb + 1));

	if (a == NULL)
		return (NULL);
}
