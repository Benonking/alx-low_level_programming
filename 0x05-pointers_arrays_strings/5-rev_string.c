#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string argument
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

/**
 * rev_string - reverse string
 * @s: argument of function
 * Return: Always 0
 */
void rev_string(char *s)
{
	nt i = 0;
	int j = (_strlen(s) - 1);
	char tmp;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
