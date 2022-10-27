#include "main.h"

/**
 * binary_to_unit - convert binary to unsigned int
 * @b: binary number
 * Return: integer or 0 if there is char that isnt (0,1)
 */

unsigned int binary_to_unit(const char *b)
{
	int len = 0;
	unsigned int sum = 0,
	int i;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;
	len = len - 1;
	while (b[i])
	{
	if (b[i] != '0' && b[i] != '1')
		return (0);
	if (b[i] == '1')
		sum += (1 * (1 << len));
	i++;
	len--;
}
