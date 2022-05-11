#include <stdio.h>

#define a_rowsize 2
#define a_colsize 2
#define b_rowsize 2
#define b_colsize 2

int main()
{
    
    int i, j, k;

    float A[a_rowsize][a_colsize], B[b_rowsize][b_colsize], C[a_colsize][b_rowsize];

    for(i = 0; i < a_rowsize; i++)
    {
        for(j = 0; j < a_colsize; j++)
        {
            printf("Enter the number of Matrix A[%d][%d] : ", i, j);
            scanf(" %f", &A[i][j]);
        }
    }
    printf("\n");

    printf("Matrix A : \n");

    for(i = 0; i < a_rowsize; i++)
    {
        for(j = 0; j < a_colsize; j++)
        {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i = 0; i < b_rowsize; i++)
    {
        for(j = 0; j < b_colsize; j++)
        {
            printf("Enter the number of Matrix B[%d][%d] : ", i, j);
            scanf(" %f", &B[i][j]);
        }
    }
    printf("\n");

    printf("Matrix B : \n");

    for(i = 0; i < b_rowsize; i++)
    {
        for(j = 0; j < b_colsize; j++)
        {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // sum function
    if((a_rowsize==b_rowsize)&&(a_colsize==b_colsize))
    {
        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    
        printf("sum result : \n");

        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : The matrix size doesn't fit\n");
    }

    //subtraction function
    if((a_rowsize==b_rowsize)&&(a_colsize==b_colsize))
    {
        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] - B[i][j];
            }
        }
    
        printf("subtraction result : \n");

        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : The matrix size doesn't fit\n");
    }

    //multiple function
    double mul = 0;

    if(a_colsize==b_rowsize)
    {
        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < b_colsize; j++)
            {
                for (k = 0; k < a_colsize; k++)
                {
                    mul += A[j][k]*B[k][i];
                }
                C[i][j] = mul;
            }
        }
    
        printf("multiple result : \n");

        for(i = 0; i < a_colsize; i++)
        {
            for(j = 0; j < b_rowsize; j++)
            {
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : The matrix size doesn't fit\n");
    }

    return 0;
}