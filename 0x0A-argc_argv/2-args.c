#include <stdio.h>

/**
 * main - print all arguments recieved
 * @argc: number of arguments
 * @argv: pointer to array containing arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
