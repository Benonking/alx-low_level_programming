#include "main.h"

/**
 * _memcpy - copy in bytes from src buffer to dest buffer
 * @src: source
 * @dest: constant byt
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

