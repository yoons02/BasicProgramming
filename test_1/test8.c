#include <stdio.h>

int main()
{
    int input[5];
    int i;

    for (i = 0; i < 5;i++)
    {
        printf("input[%d] : ",i);
        scanf("%d", &input[i]);
    }

    printf("Before\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ",input[i]);
    }
    printf("\nAfter\n");
    for(i = 4; i >= 0; i--)
    {
        printf("%d ",input[i]);
    }
}