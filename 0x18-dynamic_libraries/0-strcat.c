#include "main.h"
/**
 * *_strcat- appends a string src to the end of another string dest
 * @src: original string
 * @dest: destination string
 * Return: Dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')/* find end  of src */
		i++;
	while ((dest[i++] = src[j++]) != '\0')/*copt src*/
		;

	return (dest);
}
