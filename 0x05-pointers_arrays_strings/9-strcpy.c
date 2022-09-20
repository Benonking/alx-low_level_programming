#include "main.h"


int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * *_strcpy- copy string pointed to src to buffer pointed to dest
 * @src: source
 * @dest:distination buffer
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int len_src = _strlen(src);
	int i;

	for (i = 0; i <= len_src; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
