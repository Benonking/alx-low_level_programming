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
 * puts_half- Prints ha;lf of the string
 * @str: Stringto be printed
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] <= _strlen(str); i++)
	{
		if (str[i] > _strlen(str) / 2)
		{
			_putchar(str[i]);
		}
	}
	_putchchar('\n');
}
