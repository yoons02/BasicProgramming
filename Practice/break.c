#include <stdio.h>

int main()
{
    int input,i;
    int value = 1;

    for (;;)
    {
        printf("Enter the number (stop : 0) : ");
        scanf(" %d", &input);

        if(input == 0)
        {
            break;
        }
        else
        {
            for(i = 1; i <= input; i++)
            {
                value *= i;
            }
            printf("Result : %d\n", value);
        }
    }
    printf("Terminated\n");

    return 0;
}