i#include "main.h"
/**
 * print_numbers - Print numberds 0 to 9
 * Return: Always sucess 0 
 */

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
		_putchar('\n');
	}
}
