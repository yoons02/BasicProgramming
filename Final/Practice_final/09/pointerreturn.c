#include <stdio.h>

int* add(int* psum, int m, int n);
int* subtract(int* psub, int m, int n);
int* multiple(int* pmul, int m, int n);

int main()
{
    int a = 0, b = 0;
    int sum = 0, sub = 0, mul = 0;

    printf("a, b 값 입력 : ");
    scanf("%d, %d", &a, &b);

    printf("합 : %d\n", *add(&sum, a, b));
    printf("차 : %d\n", *subtract(&sub, a, b));
    printf("곱 : %d\n", *multiple(&mul, a, b));

    return 0;
}

int* add(int* psum, int m, int n)
{
    *psum = m + n;
    return psum;
}

int* subtract(int* psub, int m, int n)
{
    *psub = m - n;
    return psub;
}

int* multiple(int* pmul, int m, int n)
{
    *pmul = m * n;
    return pmul;
}