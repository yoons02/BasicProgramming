#include <stdio.h>

int main()
{
    int num, i;

    printf("Enter the exception number : ");
    scanf(" %d", &num);

    for (i = 1; i <= 10; i++)
    {
        if(i%num == 0)
        {
            continue; // not print (a multiple of 'num')
        }
        else
        {
            printf("%d", i);
        }
    }   
}