#include "lists.h"

/**
 * print_listint - print alll elements in a listint_t
 * @h: pointer to head of the list
 * Return: list elements
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
