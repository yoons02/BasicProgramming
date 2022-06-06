#include <stdio.h>

#define rowsize 4
#define colsize 2

int main()
{
    int i, j;
    int midsum = 0,finalsum = 0;

    int score[][colsize] = {98, 90, 89, 99, 88, 100, 96, 95};

    printf("    mid     final   \n");
    printf("--------------------\n");
    for (i = 0; i < rowsize; i++)
    {
        for (j = 0; j < colsize; j++)
        {
            printf("    %d    ", score[i][j]);
            if (j == 0)
            {
                midsum += score[i][j];
            }
            else
            {
                finalsum += score[i][j];
            }
        }
        printf("\n");
    }
    printf("--------------------\n");
    printf("    %d        %d\n", midsum/rowsize, finalsum/rowsize);
    
    printf("\nTotal mid : %d\n", midsum);
    printf("Total fianl : %d\n", finalsum);

    return 0;
}