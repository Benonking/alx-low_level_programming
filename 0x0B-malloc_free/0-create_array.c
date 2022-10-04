#include "main.h"
#define NULL 0
#include <stdlib.h>
/**
 * create_array - create an arrray of chars, and intialiize them
 * @c: character
 * @size: size
 * @Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	int i;

	if (size <= 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	while (i < int size)
	{
		*(a + 1) = c;
		i++;
	}
	*(a + i) ='\0';
	return (a);
}
