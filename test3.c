#include <stdio.h>

#define a_rowsize 3
#define a_colsize 2
#define b_rowsize 2
#define b_colsize 3

double sum(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]); // sum fuction declaration
double sub(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]); // subraction fuction declaration
double mul(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]); // multiple fuction declaration
int main()
{
    int i, j;

    double A[a_rowsize][a_colsize], B[b_rowsize][b_colsize], C[a_colsize][b_rowsize]; // double type matrix

    for (i = 0; i < a_rowsize; i++)
    {
        for (j = 0; j < a_colsize; j++)
        {
            printf("Enter the value of Matrix A[%d][%d] : ", i, j);
            scanf(" %lf", &A[i][j]); // 'lf' type, input value
        }
    }
    printf("\nMat A\n");

    for (i = 0; i < a_rowsize; i++)
    {
        for (j = 0; j < a_colsize; j++)
        {
            printf("%f ", A[i][j]); // output value
        }
        printf("\n");
    }

    printf("\n");
    for (i = 0; i < b_rowsize; i++)
    {
        for (j = 0; j < b_colsize; j++)
        {
            printf("Enter the number of Matrix B[%d][%d] : ", i, j);
            scanf(" %lf", &B[i][j]); // 'lf' type, input value
        }
    }

    printf("\nMat B\n");
    for (i = 0; i < b_rowsize; i++)
    {
        for (j = 0; j < b_colsize; j++)
        {
            printf("%f ", B[i][j]); // output value
        }
        printf("\n");
    }


    printf("\n");
    printf("%f\n\n", sum(A, B)); // call sum function
    printf("%f\n\n", sub(A, B)); // call sub function
    printf("%f\n\n", mul(A, B)); // call mul function
}

double sum(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]) // parameter
{
    int i, j;
    double C[a_rowsize][a_colsize];

    printf("Mat A + Mat B\n");
    if ((a_rowsize == b_rowsize) && (a_colsize == b_colsize)) // check sum define
    {
        for (i = 0; i < a_rowsize; i++)
        {
            for (j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] + B[i][j]; // sum by position
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

double sub(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]) // parameter
{
    int i, j;
    double C[a_rowsize][a_colsize];

    printf("Mat A - Mat B\n");
    if ((a_rowsize == b_rowsize) && (a_colsize == b_colsize)) // check subtraction define
    {
        for (i = 0; i < a_rowsize; i++)
        {
            for (j = 0; j < a_colsize; j++)
            {
                C[i][j] = A[i][j] - B[i][j]; // subtration by position
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

double mul(double A[a_rowsize][a_colsize], double B[b_rowsize][b_colsize]) // parameter
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
                temp = 0; // initialization
                for (k = 0; k < a_colsize; k++)
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
    else
    {
        printf("Error : Matrix product is not defined\n");
        return 0;
    }
}