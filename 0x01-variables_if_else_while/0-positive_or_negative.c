#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
	{
		printf("%i is positive", n);
	}
	else if (n==0)
	{
		printf("%i is zero", n);
	}
	else if(n<0)
	{
		printf("%i is neagaive" n);
	}
	return (0);
}
