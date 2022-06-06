#include <stdio.h>

int main()
{
    int ary[][3] = {3,4,6,5,1,8,9,4,5};
    int (*ptr)[3] = &ary;

    printf("%d\n", **++ptr); //5
    printf("%d\n", *(*(ary+2)+1));//4
    printf("%d\n", *(*(ary)+2));//6
    printf("%d\n", *(*(ptr+1)));//9

    return 0;
}