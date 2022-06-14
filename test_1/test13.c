#include <stdio.h>

int main()
{
    int array[5][5];
    int i, j, k = 0, spin;

    for (spin = 0; spin < 9; spin++)
    {
        for (i = 0; i < 5; i++)
        {
            j = spin - i;
            if ((j >= 0)&&(j < 5))
            {
                k += 1;
                array[i][j] = k;
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}