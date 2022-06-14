#include <stdio.h>

int main()
{
    int ary[][5] = {1,2,3,4,5,6,7,8,9,10};
    int (*ptr)[5] = ary;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        (*ptr)[i] += 5;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d  ",*(ptr+i));
    }
}