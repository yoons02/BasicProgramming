#include <stdio.h>

#define a_rowsize 3
#define a_colsize 2
#define b_rowsize 2
#define b_colsize 3

double sum(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]);
double sub(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]);
double mul(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]);

int main()
{
    int i, j;

    double A[a_rowsize][a_colsize], B[b_rowsize][b_colsize], C[a_colsize][b_rowsize];

    for (i = 0; i < a_rowsize; i++)
    {
        for (j = 0; j < a_colsize; j++)
        {
            printf("Enter the number of Matrix A[%d][%d] : ", i, j);
            scanf(" %lf", &A[i][j]);
        }
    }
    printf("\nMat A\n");

    for (i = 0; i < a_rowsize; i++)
    {
        for (j = 0; j < a_colsize; j++)
        {
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < b_rowsize; i++)
    {
        for (j = 0; j < b_colsize; j++)
        {
            printf("Enter the number of Matrix B[%d][%d] : ", i, j);
            scanf(" %lf", &B[i][j]);
        }
    }

    printf("\nMat B\n");
    for (i = 0; i < b_rowsize; i++)
    {
        for (j = 0; j < b_colsize; j++)
        {
            printf("%f ", B[i][j]);
        }
        printf("\n");
    }


    printf("\n");
    printf("%f\n\n", sum(A, B));
    printf("%f\n\n", sub(A, B));
    printf("%f\n\n", mul(A, B));
}

double sum(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize])
{
    int i, j;
    double C[a_rowsize][a_colsize];

    printf("Mat A + Mat B\n");
    if ((a_rowsize == b_rowsize) && (a_colsize == b_colsize))
    {
        for (i = 0; i < a_rowsize; i++)
        {
            for (j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    else
    {
        printf("Error : The matrix size doesn't fit\n");
        return 0;
    }
}

double sub(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize])
{
    int i, j;
    double C[a_rowsize][a_colsize];

    printf("Mat A - Mat B\n");
    if ((a_rowsize == b_rowsize) && (a_colsize == b_colsize))
    {
        for (i = 0; i < a_rowsize; i++)
        {
            for (j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] - B[i][j];
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    else
    {
        printf("Error : The matrix size doesn't fit\n");
        return 0;
    }
}

double mul(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize])
{
    int i, j, k;
    double temp;
    double C[a_rowsize][a_colsize];

    printf("Mat A * Mat B\n");
    if (a_colsize == b_rowsize)
    {
        for (i = 0; i < a_rowsize; i++)
        {
            for (j = 0; j < b_colsize; j++)
            {
                temp =0;
                for (k = 0; k < a_colsize; k++)
                {
                    temp+=A[i][k]*B[k][j];
                    C[i][j]=temp;
                }
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    else
    {
        printf("Error : Matrix product is not defined\n");
        return 0;
    }
}