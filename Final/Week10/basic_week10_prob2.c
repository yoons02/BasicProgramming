#include <stdio.h>

#define a 2
#define b 2
#define c 2
#define d 2

int main()
{
    int i, j;
    double A[a*b], B[c*d];

    if (b==c)
    {
        for (i = 0; i < a*b; i++)
        {
            printf("Enter the element of Mat A[%d] : ", i);
            scanf(" %lf", &A[i]);
        }
        printf("\n");

        for (j = 0; j < c*d; j++)
        {
            printf("Enter the element of MatB B[%d] : ", j);
            scanf(" %lf", &B[j]);
        }
    }
    else
    {
        printf("Error : Matrix multiple do not defined\n");
    }
    
    return 0;
}
