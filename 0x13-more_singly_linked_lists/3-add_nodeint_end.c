#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head: pointer to head of node
 * @n: node to be added
 * Return: Adress to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_node;
	
	new_node  = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	/*find last node*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
