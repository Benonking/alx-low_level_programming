#include "main.h"

/**
 * _strcmp - cmpaore two strings
 * @s1: first string
 * @s2: second string
 * Return: return int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
