#include "lists.h"

/**
 * free_listint - free list (listint_t)
 * @head: head of list
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
