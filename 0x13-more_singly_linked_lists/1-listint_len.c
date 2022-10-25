#include "lists.h"

/**
 * listint_len - return number of elements in a linked list
 * @h: list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
