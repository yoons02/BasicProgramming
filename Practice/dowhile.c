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
        
        if(num > 0)
        {
            do
            {
                sum += i;
                i++;
            } while (i <= num);
            
            printf("Result : %d\n", sum);
        }
    } while(num > 0);

    printf("Terminated\n");

    return 0;
}