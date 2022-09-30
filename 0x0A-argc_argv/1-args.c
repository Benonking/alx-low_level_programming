#include <stdio.h>

/**
 * main - print number of argumets
 * @argc: number of arguments
 * @argv: pointer array to string arguments
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	
	return (0);
}
