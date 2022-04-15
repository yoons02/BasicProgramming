#include <stdio.h>

int main()
{
    int i, j, num; // integer valuable

    printf("Enter the repeat number : "); 
    scanf("%d", &num); // input number of line to print '*'

    for (i = 0; i < num; i++) // repeat as much as num
    {
        for (j = 0; j < num-i-1; j++) // repeat print blank decreasing by 1
        {
            printf(" ");
        }
        
        for (j = 0; j < 2*i+1; j++) // repeat print '*' increasing by 1
        {
            printf("*");
        }
        printf("\n"); // when print the each line
    }

    printf("\n"); // print new line

    for (i = 0; i < num; i++) // repeat as much as num
    {
        for (j = 0; j < i; j++) // repeat print brank increasing by 1
        {
            printf(" ");
        }
        
        for (j = 0; j < 2*num-2*i-1; j++) // repeat print '*' decreasing by 1
        {
            printf("*");
        }
        printf("\n"); // when print the each line
    }

    printf("\n"); // print new line

    for (i = 0; i < num; i++) // repeat as much as num
    {
        for (j = 0; j < num-i-1; j++) // repeat print blank increasing by 1
        {
            printf(" ");
        }
        
        for (j = 0; j < 2*i+1; j++) // repeat print blank decreasing by 1
        {
            printf("*");
        }
        printf("\n"); // when print the each line 
    }

    for (i = 0; i < num; i++) // repeat as much as num
    {
        for (j = 0; j < i+1; j++) // repeat print blank increasing by 1
        {
            printf(" ");
        }
        
        for (j = 0; j < 2*num-2*i-3; j++) // repeat print brank decreasing by 1
        {
            printf("*");
        }
        printf("\n"); // when print the each line
    }
}
