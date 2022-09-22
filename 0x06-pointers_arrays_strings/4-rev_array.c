#include "main.h"

/**
 * reverse_array - reverse array
 * @a: array
 * @n: number of elements to reverse arrays
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int tmp, beg = 0;/*begin of array*/
	int end = n - 1;/*end of array*/

	while (beg < end)
	{
		tmp = *(a + end);
		*(a + beg) = *(a + end);
		*(a + beg) = tmp
		beg++, end--;
	}
}
