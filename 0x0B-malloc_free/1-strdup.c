#include "main.h"
#define NULL 0
#include <stdlib.h>

/**
 * _strup - return pointer to a newly  allocated space in mem
 * @str: pointer to string paramenter
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0;

	if (str == 0) /* validate str input */
	if (str == 0) /* validate str input */
		return (NULL);
	duplicate_str = malloc(sizeof(str)); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);
	while (*(str + i))
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	*(duplicate_str + i) = '\0';
	return (duplicate_str);
}
