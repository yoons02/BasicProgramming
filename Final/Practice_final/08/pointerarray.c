#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int* ary[3];

    ary[0] = &a;
    ary[1] = &b;
    ary[2] = &c;

    for (int i = 0; i < 3; i++)
    {   
        scanf("%d", ary[i]);
        printf("%d %d %d\n", *ary[0], *ary[1], *ary[2]);
    }

    return 0;
}