#include "lists.h"


/**
 * add_node_end - add a node ad end of linked list
 * @head: pointer to head of list
 * @str: string or data in node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *i;/*create new node*/

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)

		/*
		 * if there are no nodes in the list
		 * new_node becomes the first
		 */

		*head = new_node;
	else
	{
		/*
		 * iterate to last node ans set last node
		 * to point to new node
		 */
		i = *head;

		while (i->next != NULL)
			i = i->next;
		i->next = new_node;
	}
	return (new_node);
}

/**
 * _strlen - return length of a string
 * @s: string
 * Return:length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
