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
		return;
	i++;
	return (_strlen_recursion(s[i]));
}
