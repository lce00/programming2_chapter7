#include<stdio.h>
#include<stdlib.h>

int main(void)
{   
    int answer = rand() % 99;
    // printf("%d\n", answer);
    int guess;
    int tries = 0;

    do {
        printf("정답을 추측해 보세요: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer) 
            printf("제시한 정수가 높습니다.\n");
        if (guess < answer)
            printf("제시한 정수가 낮습니다.\n");

    } while (guess != answer);
        printf("축하합니다! 시도횟수 = %d번\n", tries);
}