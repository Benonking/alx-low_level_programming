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
	int len = _strlen(str);

	for (i = 0; i <= _strlen(str); i++)
	{
		if (_strlen(str) % 2 != 0)
		{
			len = _strlen(str) + 1;
		}
		else
			len = _strlen(str) / 2;

		_putchar(str[i]);
	}
}
