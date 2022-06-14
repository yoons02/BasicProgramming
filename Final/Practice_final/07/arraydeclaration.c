#include <stdio.h>

#define SIZE 5

int main()
{
    int i = 0;
    int score[SIZE] = {89, 98, 100, 97, 88};

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", score[i]);
    }

    return 0;
}