#include <stdio.h>

#define rowsize 2
#define colsize 3

int main()
{
    int i, j;
    int td[rowsize][colsize];

    td[0][0] = 1;
    td[0][1] = 2;
    td[0][2] = 3;
    td[1][0] = 4;
    td[1][1] = 5;
    td[1][2] = 6;

    for (i = 0; i < rowsize; i++)
    {
        for(j = 0; j < colsize; j++)
        {
            printf("%d ",td[i][j]);
        }
        printf("\n");
    }

    return 0;
}
