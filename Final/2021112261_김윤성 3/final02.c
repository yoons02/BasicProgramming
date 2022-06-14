#include <stdio.h>

int main()
{
    int i, j, k = 0, spin, num;

    printf("사이즈 입력 : ");
    scanf("%d", &num);

    int array[num][num];

    for (spin = 0; spin < num + (num-1); spin++)
    {
        for (i = 0; i < num; i++)
        {
            j = spin - i;
            if ((j >= 0)&&(j < num))
            {
                k += 1;
                array[i][j] = k;
            }
        }
    }


    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("%3d", array[j][i]);
        }
        printf("\n");
    }

    return 0;
}