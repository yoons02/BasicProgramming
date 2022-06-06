#include <stdio.h>

#define SIZE 6

int main()
{
    int i, sum = 0;
    int cpoint[SIZE] = {98, 89, 92, 91, 88, 100};

    for (i = 0; i < SIZE; i++)
    {
        printf("cpoint[%d] = %d\n", i, cpoint[i]);
        sum += cpoint[i];
    }

    printf("Total score : %d\n", sum);
    printf("Average : %d\n", sum/SIZE);

    return 0;
}