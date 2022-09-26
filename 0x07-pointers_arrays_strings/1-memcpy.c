include "main.h"

/**
 * _memcpy - copy memory area
 * @src: source buffer
 * @dest: destination buffer
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0 ; j <= i; j++)
		{
		*(dest + j) = *(src + i);
		}
	}
	return (dest);
}
