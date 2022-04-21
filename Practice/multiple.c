#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for(i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }

    return 0;
}