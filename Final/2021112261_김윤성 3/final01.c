#include <stdio.h>

int main()
{
    int i, j, k;
    int array[10][10];
    int count = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < -i+9; j++)
        {
            printf("    ");
        }
        for (k = 0; k < i+1; k++)
        {
            count++;
            printf("%3d ", count);
        }
        printf("\n");
    }

    return 0;
}