#include <stdio.h>

int main()
{
    int a[] = {8, 2, 8, 1, 3};
    int *p;
    p = &a;

    printf("%u", p);
}