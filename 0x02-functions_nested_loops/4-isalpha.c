#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *@alpha: parameter for alphabet
 *Return:1 if true 0 if false
 */

int _isalpha(int alpha)
{
	if (alpha >= 'a'; alpha <= 'z'
		|| alpha >= 'A'; alpha <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
