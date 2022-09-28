#include<stdio.h>
/**
 * modif_my_char_var slove me
 *
 * Return: nothing
 */
void modif_my_char_var(char *cc, char ccc)
{
	*cc='o';
	ccc = 'l';
}
/**
 * main -solve me
 *
 * Return: Always 0
 */
int main (void)
{
	char c;
	char *p;

	p=&c;
	c='b';
	printf("Value of 'c' before the call: %c\n", c);
	printf("Value of 'p' before the call: %p\n", p);

	 modif_my_char_var(p,c);
	 printf("Value of 'c' after  the call: %c\n", c);
	 printf("Value of 'p' after the call: %p\n", p);

	 return (0);
}
