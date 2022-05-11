#include <stdio.h>
double sum(A[][5], B[][5], int, int, int, int);

int main()
{

    int a_rowsize, a_colsize, b_rowsize, b_colsize;
    int i, j;

    printf("Enter the number of Matrix A\'s row and column (a, b) : ");
    scanf(" %d, %d", &a_rowsize, &a_colsize);

    printf("Enter the number of Matrix B\'s row and column (a, b) : ");
    scanf(" %d, %d", &b_rowsize, &b_colsize);
    
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

    printf("sum : %f", sum(A[][a_colsize], B[][b_colsize], a_rowsize, a_colsize, b_rowsize, b_colsize));
    
    // printf("subtraction : %f", sub(A[a_rowsize][a_colsize], B[b_rowsize][b_colsize]));

    // printf("multiple : %f", mul(A[a_rowsize][a_colsize], B[b_rowsize][b_colsize]));

}

double sum(double A[][], double B[][],int a_rowsize,int a_colsize,int b_rowsize,int b_colsize)
{
    int i, j;
    double C[2][2] = {0};

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
                printf("%f ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error : The matrix size doesn't fit");
    }
}