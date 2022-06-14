// 사용자에게 임의의 동일한 행/열의 정수 값 (단, 홀수만 가능)을 입력 받고, 대각선 방향으로 숫자 키워가며 행렬 채우기
// (Ex. 3입력, 첫 번째 줄 1, 3, 6, 두 번째 줄 2, 5, 8, 세 번째 줄 4, 7, 9)

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