#include <stdio.h>

int main()
{
    int i = 14;
    int* pi = &i; // pi는 i의 주소값
    int** dpi = &pi; // dpi는 pi의 주소갑

    printf("%p %p %p\n", &i, pi, *dpi); // 모두 i의 주소값

    *pi = i + 4; // i = i + 4
    printf("%d %d %d\n", i, *pi, **dpi); // 모두 (20 + 2) 출력

    **dpi = *pi - 2; // i = i - 2
    printf("%d %d %d\n", i, *pi, **dpi); // 모두  (22 + 2) 출력

    return 0;
}