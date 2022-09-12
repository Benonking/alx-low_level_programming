#include<stdio.h>
/**
 * main - prints a combo of two digit numbs
 * Return \: Always 0 (sucess)
 */

int main(void)
{
	int tens;
	int ones;
	int x;
	int o;

	for (tens = '0'; tens <= '9'; tens++)/*print two digit cobination*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (x = tens; x <= '9'; x++)/*printing second pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');/*printing spare between the nums*/
					putchar(x);
					putchar(o);

					if (!((tens == '9' && ones == '8') &&
								(x == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
