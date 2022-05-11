#include <stdio.h>

int main()
{
    int i, j; // integer valuable
    
    for (i = 2; i <= 9; i++) // repeat 2 to 9 increasing by 1
        for (j = 1; j <= 9; j++) // repeat 1 to 9 increasing by 1
        {
            printf("%d*%d=%d ", i, j, i*j); // print multiplication
            if (j == 9) // if the step multiplication end,
                printf("\n"); // print new line
        }
    return 0;
}