#include <stdio.h>

int main()
{
    int i = 10;
    int* pi = &i;
    int** dpi = &pi;

    printf("%u %u %u\n", &i, pi, *dpi);
    printf("%d %d %d\n", i, *pi, **dpi);

    return 0;
}