#include <stdio.h>

int main()
{
    char num1, num2; // character variable
    
    printf("Enter the num1(1~9) : ");
    scanf(" %c", &num1); // input character variable
    num1 = num1 - 48; // convert from charcter to integer

    printf("Enter the num2(1~9) : ");
    scanf(" %c", &num2); // input character variable
    num2 = num2 - 48; // convert from character to integer
    
    printf("%d * %d = %d\n", num1, num2, num1*num2); // multiply  num1, num2
    printf("%d - %d = %d\n", num1, num2, num1-num2); // subtract num1, num2
    printf("%d + %d = %d\n", num1, num2, num1+num2); // sum num1, num2
    printf("%d / %d = %.4f\n", num1, num2, (float)num1/num2); // divide num1, num2

    return 0;
}