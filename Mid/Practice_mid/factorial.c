#include <stdio.h>

int factorial(int); // function declaration

int main()
{
    int num, i;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        printf("%d! = %d\n", i, factorial(i)); // call funtion
    }
        
    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num-1); // recall function
    }
    else
    {
        return 1;
    }
        
    return 0;
}