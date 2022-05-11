#include <stdio.h>

int main()
{   // overflow
    char OverNum1 = 128; // char character Max : 127
    int OverNum2 = 2147483648; // integer character Max : 2147483647

    // underflow
    char UnderNum1 = -129; // char character Min : -128
    int UnderNum2 = -2147483649; // integer character Min : -21474833648
    printf("%d\n%d\n%d\n%d\n", OverNum1, OverNum2, UnderNum1, UnderNum2);

    return 0;
}