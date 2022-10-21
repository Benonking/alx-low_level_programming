#include "lists.h"

/**
 * size_t print_list - print the number of nodes in a list
 * @h: pointer to the list elemets
 * If the list is NULL print [0] (nil)
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 1; h->next != NULL; i++)
		/*iterate throuth the list up to last elemet*/
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nill)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);

	return (i);

}
