#include "lists.h"

/**
 * add_dnodeint - add new node at the begining of doubly linked list
 * @head: point to head of list
 * @n:data to be added
 * Return: address of new added element or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);


	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;/*previous node is alaways NULL*/
	new->next = (*head);/*link new node to head*/

	if ((*head) != NULL)
	{
		(*head)->prev = new;
	}
	(*head) = new;
}
