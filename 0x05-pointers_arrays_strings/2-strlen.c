#include "main.h"
/**
 * _strlen- return length of string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
