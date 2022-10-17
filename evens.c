#include<stdio.h>

int main(void)
{
    int n;

    printf("==========\n");

    n = 1;
    while (n <= 9)
    {
        if (n % 2 == 0)
        for(int i = 1; i <= 9; i++)
        {
            printf("%d x %d = %d\n", n, i, i*n);
            printf("\n");
        }
        n++;
        
    }

    return 0;
}