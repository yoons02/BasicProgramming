#include <stdio.h>

int main()
{
    int num, i, sum;
    
    do
    {
        printf("Enter the number (stop : 0): "); 
        scanf(" %d", &num);

        sum = 0;
        i = 1;
        // initial value

        if(num > 0) // do while statement must have conditional statement inside
        {
            do
            {
                sum += i;
                i++;
            } while (i <= num);
            
            printf("Result : %d\n", sum);
        }
    } while(num > 0);

    printf("Terminated\n"); // (num > 0) is over

    return 0;
}