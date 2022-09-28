#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	i++;
	_strlen_recursion(s);
	return (i);
}
