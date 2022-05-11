#include <stdio.h>

int main()
{
    char before, after; // char valuable
    int i; // integer valuable

    for (i = 0; i < 5; i++) // repeat 5 times 
    {
        printf("Enter the Alphbet (Upper/Lower): ");
        scanf(" %c", &before); // input alphabet and assign

        if ((before > 96)&&(before < 123)) // if before is lowercase
        {
            after = before - 32; // change to uppercase
            printf("%c\n", after);
        }
        else if ((before > 64)&(before < 91)) // if before is uppercase
        {
            after = before + 32; // change to lowercase
            printf("%c\n", after);
        }
        else
            printf("Error : please enter the alphabet\n");
    }
    return 0;
}