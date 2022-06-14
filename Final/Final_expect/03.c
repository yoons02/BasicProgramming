// 다음을 출력하는 프로그램을 중첩된 for문을 이용하여 작성하시오.(첫 번째 줄 0, 두 번째 줄 101, 세 번째 줄 21012..."정삼각형")

#include <stdio.h>

#define value 7

int main()
{
    int i, j, k;
    int num = 0;

    for (i = 0; i < value; i++)
    {
        for (k = 0; k < -i+value-1; k++)
        {
            printf(" ");
        }
        for (j = 0; j < 2*i+1; j++)
        {
            if (j >= i)
            {
                printf("%d", num);
                num++;
            }
            else
            {
                printf("%d", num);
                num--;
            }
        }
        printf("\n");
    }

    return 0;
}