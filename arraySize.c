#include<stdio.h>
/**
 * main -Prints the size of an array and the address of the array
 *
 * Return: Always 0
 */
int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("Sizeof(b): %lu\n", sizeof(b));
	printf("Sizeof(&b): %lu\n", sizeof(&b));
	return (0);
}
