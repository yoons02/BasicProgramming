#include <stdio.h>

int main()
{
    int input,i;
    int value;

    for (;;) // infinity loop
    {
        printf("Enter the number (stop : 0) : ");
        scanf(" %d", &input);

        value = 1; // initial value

        if(input == 0)
        {
            break; // 0 is over
        }
        else
        {
            for(i = 1; i <= input; i++)
            {
                value *= i; // value = value * i
            }
            printf("Result : %d\n", value); // value is factorial value
        }
    }
    printf("Terminated\n");

    return 0;
}