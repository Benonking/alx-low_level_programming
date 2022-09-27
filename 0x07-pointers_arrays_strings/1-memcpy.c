#include "main.h"

/**
 * _memcpy - copy memory area
 * @src: source buffer
 * @dest: destination buffer
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	}

	return (dest);
}
