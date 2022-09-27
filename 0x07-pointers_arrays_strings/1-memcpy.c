#include "main.h"
/**
 * _memcpy - copy n bytes of memory from src to dest buffer
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
