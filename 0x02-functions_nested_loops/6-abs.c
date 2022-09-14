#include "main.h"
/**
 * _abs - prints abolute number of an integer
 * @num: parameter to hold anumber
 *Return - 0 Always
 */

int _abs(int num)
{
	if (num > 0)
		return (num);
	else if (num < 0)
		return (-num);

	return (0);
}
