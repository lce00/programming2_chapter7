#include<stdio.h>

int main(void)
{
    int n;

    printf("==========\n");

    n = 10;
    
    for(int i = 1; i <= 7; i++)
    {
        n = n*4;

    }

    printf("%d 마리\n", n);

    return 0;
}