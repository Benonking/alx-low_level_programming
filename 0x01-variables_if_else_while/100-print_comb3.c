#include<stdio.h>
/**
 *main - print combination of two numbers in ascending order
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = '0'; tens <= '9'; tens++)/*incremnt tens */
	{

		for (ones = (tens + 1); ones <= '9'; ones++)/*increment ones 2 */
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
