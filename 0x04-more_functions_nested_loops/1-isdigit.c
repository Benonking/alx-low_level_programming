#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: argument of the function
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
