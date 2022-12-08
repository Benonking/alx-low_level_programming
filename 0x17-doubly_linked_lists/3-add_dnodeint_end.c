#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: point to head of list
 * @n: data/ node to be added
 * Return: new element or NULL on fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *head;/*store the head node temporarilty*/
	if ((*head) == NULL)/*make new node head if list is empty*/
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	} /*move to last node*/
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	new->next = NULL;
	new->prev = temp;
	temp->next = new;

	return (new);
}
