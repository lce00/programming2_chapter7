#include<stdio.h>

int main(void)
{
    int n;

    printf("==========\n");

    n = 1;
    while (n <= 100)
    {
        if (n % 3 == 0) printf("%d\n", n);
        n++;
    }

    return 0;
}