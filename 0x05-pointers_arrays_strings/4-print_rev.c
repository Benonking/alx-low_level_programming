#include "main.h"
#include<string.h>
/**
 * print_rev- Prints revers of a string 
 * @s: string to be reveresed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len=0;
	int i;

	while (*s != '\0')/*get length of string*/
	{
		len++;
		++s;
	}
	--s;/*got to last character*/
	for (i = len; i > 0; i--)/*iterate and print reverse*/
	{
		_putchar(*s);
		s--;
	}
}
