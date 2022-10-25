#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at nth position
 * @head: head of list
 * @idx: index of the list where new node will be inserted
 * @n: new node data
 * Return: new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;/*add data to the node*/
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL)/*account for idx out of range*/
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
