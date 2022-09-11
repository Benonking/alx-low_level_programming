#include<stdio.h>
/**
 * main - Print numbers in reverse order
 * Returm: always 0
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
