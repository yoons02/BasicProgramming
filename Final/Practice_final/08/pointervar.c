#include <stdio.h>

int main()
{
    int data = 100;
    int* ptr;
    
    ptr = &data;
    printf("%u\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}