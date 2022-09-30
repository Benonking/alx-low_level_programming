#include <stdio.h>

/**
 * main - print number of argumets
 * @argc: number of arguments
 * @argv: pointer array to string arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	if (*argv[i] > 0)
		printf("%d\n", argc);
	
	return (0);
}
