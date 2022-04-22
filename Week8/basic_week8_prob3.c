#include <stdio.h>

int main()
{
    int num, i, j; // integer valuable

    printf("Enter the number : "); 
    scanf(" %d", &num); // input value and assign

    for (i = 1; i < 10; i++) // repeat 9 times (1~9) 
    {
        printf("%d*%d=%3d    ", num, i, num*i);
        if (i == 5)
            printf("\n"); // (1~5) multiple is first line, (6~9) multiple is second line
    }
}