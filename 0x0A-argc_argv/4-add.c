#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_digit - iterate through each char in sring to test if it's a digit
 * @s: string
 * Return: true only if entire string is a number, false if not
 */

bool is_digit(char *s)
{
	int j = 0;

	for (j = 0; s[j]; j++)
	{
		if (!(s[j] >= '0' && s[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - add positive arguments
 * @argc: number of arguments
 * @argv: poiter to array of string arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", argc);
	}
	else
		for (i = 1; i < argc; i++)
		{
			if (!(is_digit(argv[i])))
			{
				printf("Error\n");
				return (1);
			}

			if (atoi(argv[i]) > 0)
				sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
