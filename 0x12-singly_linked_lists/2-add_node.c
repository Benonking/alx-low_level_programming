#include "lists.h"

/**
 * add_node -  Add new node at the beginning of the list
 * @head: pointer to head of list
 * @str: pointer to string in list
 * Return:created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;/*new node*/

	if (*str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)/*set what new node points to first*/
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node = *head;
	*head = new_node;/*set head to point to new node */
	return (new_node);

}

/**
 * _strlen - return length of a string
 * @s: string
 * Return:length
 */

int _strlen(*s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
