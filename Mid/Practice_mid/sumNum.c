#include <stdio.h>

int main()
{
    int sum(int);

    int num, sum1;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Sum even number = %d\n", sum(num));
}

int sum(int num)
{   
    int i;
    int sum1 = 0;

    for (i = 2; i <= num; i++)
    {
        if (i%2==0)
        {
            sum1 += i;
        }
    }
    return sum1;
}