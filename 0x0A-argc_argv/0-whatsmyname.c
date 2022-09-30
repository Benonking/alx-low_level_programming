#include <stdio.h>

/**
 *main - programe prints its name
 *@argc: - number of arguments
 *@argv:- pointer to array of strings of arguments
 *Return: Always 0
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
