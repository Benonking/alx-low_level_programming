#include "main.h"

/**
 **_strncat- copy n charcters from src to dest
 *@src: Original string
 *@dest:final string
 *@n:number of charaters to copy
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')/* find end  of src */
		i++;
	if (src[j] != src[n])
	{
		while ((dest[i++] = src[j++]) != '\0')/*copt src*/
		;
	}
	return (dest);
}
