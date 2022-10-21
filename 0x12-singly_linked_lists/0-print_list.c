#include "lists.h"

/**
 * print_list - print the number of nodes in a list
 * @h: pointer to the list elemets
 * If the list is NULL print [0] (nil)
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);

}
