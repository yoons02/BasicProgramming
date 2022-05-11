#include <stdio.h>

int main()
{
    float a,b; 

    printf("Input number a,b : ");
    scanf("%f %f", &a,&b); //Receive float value and store them a,b

    printf("%.3f + %.3f = %.3f\n", a,b,a+b); //print a,b,a+b
    printf("%.3f - %.3f = %.3f\n", a,b,a-b); //print a,b,a-b
    printf("%.3f * %.3f = %.3f\n", a,b,a*b); //print a,b,a*b

    return 0;
}