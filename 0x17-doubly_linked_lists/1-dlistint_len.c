#include "list.h"

/**
 * dlistint_len - return lengtrh of doubly linked list
 * @h: point to head of list
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
