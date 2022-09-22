#include "main.h"

/**
 * _strcmp - cmpaore two strings
 * @s1: first string
 * @s2: second string
 * Return: return int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		s1++;
	for (j = 0; s2[j] != '\0'; j++)
		s2++;

	return (s1++ - s2++);
}
