#include <stdio.h>

int main()
{
    int data[] = {1,3,5,7};
    int* ptr;

    ptr = &data[1];
    printf("%d %d %d\n", *(ptr-1), *ptr, *(ptr+2));
    printf("%d %d %d\n", *ptr++, *++ptr, --*ptr);

    return 0;
}