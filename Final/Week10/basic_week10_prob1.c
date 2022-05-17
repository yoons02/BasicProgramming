#include <stdio.h>

#define a_size 5 // define size
#define b_size 5

int swap(int *ptrA, int *ptrB); // function declaration

int main()
{
    int i, j;
    int A[a_size], B[b_size];
    int *ptrA = &A[0], *ptrB = &B[0]; // pointer declaration

    if (a_size == b_size)
    {
        for (i = 0; i < a_size; i++)
        {
            printf("Enter the element of Mat A[%d] : ", i);
            scanf(" %d", &A[i]); // input Mat A element 
        }
        printf("\n");

        for (j = 0; j < b_size; j++)
        {
            printf("Enter the element of Mat B[%d] : ", j);
            scanf(" %d", &B[j]); // input Mat B element 
        }
        printf("\n");

        printf("Before swap Mat A, Mat B\n");
        printf("A = [ ");

        for (i = 0; i < a_size; i++)
        {
            printf("%d ", A[i]);
        }

        printf("]\n");

        printf("B = [ ");

        for (i = 0; i < a_size; i++)
        {
            printf("%d ", B[i]);
        }

        printf("]\n\n");

        printf("%d", swap(*ptrA, *ptrB)); // swap function call
    }
    else
    {
        printf("Matrix sizes are not fit\n");
    }
} 

int swap(int *ptrA, int *ptrB)
{
    int i, j;
    int *temp;

    for(i = 0; i < a_size; i++)
    {
        *(temp + i) = *(ptrB + i);
        *(ptrB + i) = *(ptrA + i);
        *(ptrA + i) = *(temp + i);
    }

    printf("After swap Mat A, Mat B\n");
    printf("A = [ ");

    for (i = 0; i < a_size; i++)
    {
        printf("%d", *(ptrA + i));
    }

    printf("]\n");

    printf("B = [ ");

    for (i = 0; i < a_size; i++)
    {
        printf("%d", *(ptrB + i));
    }

    printf("]\n\n");

    return 0;
}