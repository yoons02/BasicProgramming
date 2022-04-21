#include <stdio.h>

int main()
{
    int i ,j, num, dif;
    int value = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter the difference : ");
    scanf("%d", &dif);

    for (i = 0; i < num; i++)
    {
        if(i > 0)
            {
                for (j = 0; j <= i-1; j++)
                {
                    value += dif;
                    printf("%5d", value);
                    break;
                }
            }
        else 
            printf("%5d", 0);
    }

    return 0;
}