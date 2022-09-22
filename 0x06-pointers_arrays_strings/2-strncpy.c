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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		if (src[i] <= src[n])
			dest[i] = src[i];
		dest[i] = '\0';

	return (dest);
}
