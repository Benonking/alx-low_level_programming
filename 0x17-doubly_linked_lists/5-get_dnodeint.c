#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at a specific index
 * @head: point to head of list
 * @index: position of node
 * Return: node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
		if (index == 0)
			return (head);
	}
	return (NULL);
}
