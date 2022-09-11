#include<stdio.h>
/**
 * main - Print lower case alphabet  in reverse order
 * Returm: Always 0 (Success)
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
