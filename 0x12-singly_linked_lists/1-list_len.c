#include "lists.h"

/**
 * list_len - return the length of a list
 * @h: point elemtent in list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
