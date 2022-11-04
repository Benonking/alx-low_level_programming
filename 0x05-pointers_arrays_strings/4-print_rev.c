#include "main.h"

/**
 * print_rev- Prints revers of a string
 * @s: string to be reveresed
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0;
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
	_putchar('\n');
}

/**
/**Method 2 using for loop
 * print_rev - print string in reverse
 * @str: string
 * Return: 0
 */

void print_rev(char *str)
{
        int i = 0, len = 0, j;
        while (str[i] != '\0')
        {
                i++;
                len++;
        }

        for (j = len ; j >= 0; j--)
        {
                printf("%c", str[j]);
        }
        printf("\n");
}
*/
