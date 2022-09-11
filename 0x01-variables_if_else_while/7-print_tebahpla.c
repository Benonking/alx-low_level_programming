#include<stdio.h>
/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{

	char LR = 'z';

	while (LR >= 'a')
	{
		putchar(LR);
		LR--;
	}
	putchar('\n');

	return (0);
}
