#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string argument
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

/**
 * puts2- Print every other character of a string
 * @str: string to pe printed
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;/*iterate in string*/

	for (str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
