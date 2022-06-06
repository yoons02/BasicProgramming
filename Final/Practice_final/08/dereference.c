#include <stdio.h>

int main()
{
    char ch = 'A';
    int data = 100;

    char* ptrch;
    ptrch = &ch;

    int* ptr;
    ptr = &data;

    printf("%d %c", *ptr, *ptrch);

    return 0;
}