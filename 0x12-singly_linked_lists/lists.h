#ifndef LIST_H
#define LIST_H

#include <stdio.h>/* printf, size_t */
#include <stdlib.h>/* malloc */
#include <string.h>/* strdup */

/**
 * struct list - sinlgly linked list
 * @str: string
 * @len: length of string
 * @next: point to next node
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _strlen(const char *s);

#endif
