#include <stdio.h>

void add(int* result, int m, int n);

int main()
{
    int a = 0, b = 0, sum = 0;
    
    printf("a, b값 입력 : ");
    scanf("%d, %d", &a, &b);

    add(&sum, a, b);
    printf("합 : %d\n", sum);

    return 0;
}

void add(int* result, int m, int n)
{
    *result = m + n;
}