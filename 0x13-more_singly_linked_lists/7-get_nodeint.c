#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: head of list
 * @index: index of the node
 * Return: NULL if node doest exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

	}
	return (head);
}
