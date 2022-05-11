#include <stdio.h>

#define a_rowsize 3
#define a_colsize 3
#define b_rowsize 3
#define b_colsize 3

double sum(float A[a_rowsize][a_colsize] ,float B[b_rowsize][b_colsize]);

int main()
{
    int i, j;

    float A[a_rowsize][a_colsize], B[b_rowsize][b_colsize], C[a_colsize][b_rowsize];

    for(i = 0; i < a_rowsize; i++)
    {
        for(j = 0; j < a_colsize; j++)
        {
            printf("Enter the number of Matrix A[%d][%d] : ", i, j);
            scanf(" %f", &A[i][j]);
        }
    }

    for(i = 0; i < a_rowsize; i++)
    {
        for(j = 0; j < a_colsize; j++)
        {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < b_rowsize; i++)
    {
        for(j = 0; j < b_colsize; j++)
        {
            printf("Enter the number of Matrix B[%d][%d] : ", i, j);
            scanf(" %f", &B[i][j]);
        }
    }

    for(i = 0; i < b_rowsize; i++)
    {
        for(j = 0; j < b_colsize; j++)
        {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    printf("sum : %f", sum(A[a_rowsize][a_colsize], B[b_rowsize][b_colsize]));
}

void sum(float A[a_rowsize][a_colsize],float B[b_rowsize][b_colsize], C[a_rowsize][a_colsize])
{
    int i, j;
    double C[a_rowsize][a_colsize] = {0};

    printf("numbers: %d %d %d %d \n", a_rowsize, a_colsize, b_rowsize, b_colsize);

    if((a_rowsize==b_rowsize)&&(a_colsize==b_colsize))
    {
        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    
        for(i = 0; i < a_rowsize; i++)
        {
            for(j = 0; j < a_colsize; j++)
            {
                return C[i][j];
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : The matrix size doesn't fit");
        return Null;
    }
}
