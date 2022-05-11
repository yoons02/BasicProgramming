#include <stdio.h>

int add2(int, int);

int main()
{
    int a, b;

    printf("Enter the number a,b : ");
    scanf(" %d, %d", &a, &b);

    int sum = add2(a,b);
    printf("result : %d", sum);
}

int add2(int a,int b)
{   
    int sum;
    sum = a+b;

    return (sum);
}