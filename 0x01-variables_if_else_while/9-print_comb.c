#include<stdio.h>
/**
 *main - print all 0-9 in ascing and separed by comma(,) and space( )
 *Return: Always 0 (Success)
 */

int main(void)
{

	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
