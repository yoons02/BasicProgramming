#include <stdio.h>

int main()
{
    int base, n; // integer valuable
    int i = 0; // integer value
    int value = 1; // integer value

    printf("Enter the base number : ");
    scanf(" %d", &base); // input value and assign

    printf("Enter the n : "); 
    scanf(" %d", &n); // input value and assign

    while (i < n) // while syntax
    {
        value *= base; // value = value * base
        i++; // i = i + 1 
    }

    printf("%d^%d = %d\n", base, n, value);
}