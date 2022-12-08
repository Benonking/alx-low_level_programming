#include "lists.h"

/**
 * sum_dlistint - sum all elements of list
 * @head: point to head of list
 * Return: 0 if no list or sum 
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
