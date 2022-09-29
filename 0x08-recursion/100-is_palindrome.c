#include "main.h"
int _strlen_recursion(char *s)
/**
 * int is_palindrome - checks if a string is empty
 * @s: string to be chacked
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return _strlen_recursion(s - 1);
}

