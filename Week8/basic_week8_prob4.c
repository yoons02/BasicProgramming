#include <stdio.h>

int main()
{
    int base, n, i; // integer valuable
    int value = 1; // integer value

    printf("Enter the base number : ");
    scanf(" %d", &base); // input value and assign

    printf("Enter the n : ");
    scanf(" %d", &n); // input value and assign

    for (i = 0; i < n; i++) // repeat n times, for syntax
    {
        value *= base; // value = value * base
    }

    printf("%d^%d = %d\n", base, n, value);
}