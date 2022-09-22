#include "main.h"
/**
 * *cap_string - capitalise all words of a string
 * @s: string to be capitalised
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	/*check firsr letterfor capital*/
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /* iterate through string */
	{

		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
			s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t'
			|| s[i - 1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
