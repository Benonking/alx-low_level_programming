#include <stdio.h>

/**
 * main - Entry point
 * print aplphabe in lower and Uper using putchar()
 * Return: 0
 */

int main(void)
{

	char L = 'a';
	char U = 'A';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}
	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');

	return (0);
}
