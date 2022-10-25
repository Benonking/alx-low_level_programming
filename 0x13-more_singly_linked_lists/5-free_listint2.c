#include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: head of list
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	head->next = NULL;

}
