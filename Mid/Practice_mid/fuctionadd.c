#include <stdio.h>

int add(int a, int b);

int main (void)
{
    int a = 3, b = 5;

    int sum = add(a,b);
    printf("합 : %d\n", sum);

    return 0;
}

int add(a,b)
{
    int sum = a + b;

    return sum;
}