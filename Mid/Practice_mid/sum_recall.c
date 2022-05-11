#include <stdio.h>

int sum(int);

int main()
{
    int a, b;

    printf("Enter the number : ");
    scanf(" %d", &a);

    printf("Result : %d", sum(a));
}

int sum(int a)
{
    if(a <= 1)
    {
        return 1;
    }
    else
    {
        return (a + sum(a-1));
    }
}