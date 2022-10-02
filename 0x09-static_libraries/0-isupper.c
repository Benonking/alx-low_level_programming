#include "main.h"
/**
 * _isupper -Checks if a cahracter is uppercase
 * @c: argument of function
 * Return: 1 id true 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
