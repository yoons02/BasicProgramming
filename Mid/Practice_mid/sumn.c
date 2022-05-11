#include <stdio.h>

int main()
{
    int input, i, j;
    int sum;

    while (1)
    {
        printf("Enter the positive number (0 is over): ");
        scanf(" %d", &input);

        if (input <= 0)
        {
            break;
        }

        for (i = 1; i <= input; i++)
        {
            sum = 0;
            for(j = 1; j <= i; j++)
            {
                printf("%d", j);
                if(i==j)
                {
                    printf(" = ");
                }
                else
                {
                    printf(" + ");
                }
                sum += j;
            }
            printf("%d\n", sum);
        }
    }
    printf("Terminated\n");
}