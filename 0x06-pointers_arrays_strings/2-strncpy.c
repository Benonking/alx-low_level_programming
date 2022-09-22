#include "main.h"

/**
 * *_strcncpy - function that coppies n string
 * @src: source string
 * @dest: destination string
 * @n: n characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, int j;

	for (i = 0; i < && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
