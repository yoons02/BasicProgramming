#include <stdio.h>

int main()
{
    int num;
    int i = 0;

    printf("Enter the exception number : ");
    scanf(" %d", &num);

    while (i <= 10)
    {
        if (i%num == 0)
        {
            i++; // caution : while statement must have increase/decrease expression first
            continue; // when use continue statement in while statement
        }    
        printf("%d  ", i);
        i++;
    }
    
    return 0;
}