#include <stdio.h>

int factorial(int);

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("%d! = %d", num, factorial(num));

    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num-1);
    }
    else
    {
        return 1;
    }
        
    return 0;
}