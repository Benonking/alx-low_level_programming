#include "main.h"

/**
 * _strncat - copy n charcters from src to dest
 * @src: Original string
 * @dest: final string
 * @n: number of charaters to copy
 * Return: dest
 */

char* _strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
