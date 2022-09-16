#include<stdio.h>

int main(void)
{
	 int i, j;
	 int n = 0;

        for (i = 1; i <= n; i++)
        {
                for (j = 1; j < i; j++)
                {
                        printf(" ");
                }
		printf("\\");
                printf("\n");
                if (n < 0)
                {
                        printf("\n");
                }
        }
	return (0);

}
