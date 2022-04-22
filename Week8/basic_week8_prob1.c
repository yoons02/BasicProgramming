#include <stdio.h>

int main()
{
    int a, b; // integer valuble

    printf("Enter the number (a,b): "); 
    scanf("%d, %d", &a, &b); // input a,b valuable and asign each

    printf("%d+%d=%d\n", a, b, a+b); // print a+b
    printf("%d-%d=%d\n", a, b, a-b); // print a-b
    printf("%d*%d=%d\n", a, b, a*b); // print a*b
    printf("%d/%d=%.4f\n", a, b, (float)a/b); // print a/b, change type

    return 0;
}