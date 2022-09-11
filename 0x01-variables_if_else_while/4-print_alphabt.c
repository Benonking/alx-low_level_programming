#include <stdio.h>

/**
 *main - print alphabet in lower case exclude 'e' and 'q'
 *Rerurn: Always  0
 */

int main(void)
{

	char L = 'a';

	while (L <= 'z')
	{
		if ((L != 'e') && (L != 'q'))
			{
			putchar(L);
			}
		L++;
	}
	putchar('\n');

	return (0);
}

