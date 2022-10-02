#include "main.h"
#define NULL 0
/**
 * _strpbrk - locates the 1st occurance in s of any bytes in accept
 * @s: string
 * @accept: source
 * Return: pointer to the byte in s that maches*
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
			s = &s[i];

			return (s);
			}
		}
		i++;
	}
	return (NULL);

}
