#include <stdio.h>

int main()
{
    int i, j, num, ratio;
    int value = 1;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the ratio : ");
    scanf("%d", &ratio);


    for (i = 0; i < num; i++)
    {   
        if (i > 0)
        {
            for (j = 0; j <= i-1; j++)
            {
                value *= ratio;
                printf("%5d", value);
                break;
            }
        }
        else
            printf("%5d", 1);
    }
    return 0;
}