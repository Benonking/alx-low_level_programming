#include "lists.h"

/**
 * pop_listint - delete the head of linked list
 * @head: pointer to head of list
 * Return: Data of head
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;/*create a temp node*/

	if (*head == NULL)
		return (0);
	tmp = *head;

	data  = tmp->n;/*save data to return later*/
	*head = tmp->next;/*link head to next node*/
	free(tmp);
	return (data);
}

