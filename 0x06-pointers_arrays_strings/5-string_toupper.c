#include "main.h"

/**
 * string_toupper - change character in a string to upper
 * @*: pointer to string
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
