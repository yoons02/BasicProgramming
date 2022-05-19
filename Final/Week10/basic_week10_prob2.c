#include <stdio.h>

#define a 2
#define b 2
#define c 2
#define d 2

double mul(double A[][b], double B[][d]);

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
        A[][b] = A;        
        printf("\n");

        for (j = 0; j < c*d; j++)
        {
            printf("Enter the element of MatB B[%d] : ", j);
            scanf(" %lf", &B[j]);
        }
        B[][d] = B;
    }
    else
    {
        printf("Error : Matrix multiple do not defined\n");
    }
    
    return 0;

    printf("%lf ", mul(A, B));
}

double mul(A[a][b], B[c][d])
{
    int i, j, k;
    double C[a][d], temp;

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < d; j++)
        {
            temp = 0; // initialization
            for (k = 0; k < b; k++)
            {
                temp+=A[i][k]*B[k][j]; // one element of Mat C
                C[i][j]=temp;
            }
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
    
        