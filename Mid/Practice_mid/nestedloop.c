#include <stdio.h>

int main()
{
    int m,n,i,j;

    printf("Enter the number \'m\' : ");
    scanf(" %d", &m);

    printf("Enter the number \'n\' : ");
    scanf(" %d", &n);

    for (i = 1; i <= m; i++)
    {
        printf("m : %d\n", i);
        for (j = 1; j <= n; j++)
        {
            printf("n : %d ", j);
        }
        printf("\n");
    }
    return 0;
}