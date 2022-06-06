#include <stdio.h>

#define SIZE 5

int main()
{
    int i = 0;
    int score[SIZE];

    score[0] = 89;
    score[1] = 98;
    score[2] = 100;
    score[3] = 97;
    score[4] = 88;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", score[i]);
    }

    return 0;
}