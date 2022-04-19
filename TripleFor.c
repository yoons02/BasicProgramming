#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 2; i++)
    {
        for (k = 1; k <= 9; k++)
        {
            for (j = i + 1; j <= 9; j+=2)
            {
                printf("%d*%d=%3d    ",j,k,j*k);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}