#include <stdio.h>
/**
 * main - print all base 16 numbers in lowercase
 * Return: Always 0
 */

int main(void)
{

	int i = '0';
	char hex = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');

	return (0);
}
