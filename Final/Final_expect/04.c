// 세 개의 임의의 정수를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

int main()
{
    int array[3];
    int i, j, temp;

    printf("숫자 세 개 입력 : ");
    scanf("%d, %d, %d", &array[0], &array[1], &array[2]);

    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}