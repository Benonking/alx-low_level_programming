#include "main.h"
/**
 * _islower -checks if chacter is lowercase
 *
 * @lower:  parameter fot the function islower()
 * Return: 1 true or 0 for false
 */

int _islower(int lower)
{

	if (lower >= 'a' && lower <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
