#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: point to head of list
 * Return: 0 on sucess
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
