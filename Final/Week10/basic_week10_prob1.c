#include <stdio.h>

#define a_size 5 // define size
#define b_size 3

int swap(int *ptrA, int *ptrB); // function declaration

int main()
{
    int i, j;
    int A[a_size], B[b_size];

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

        printf("%d", swap(A, B)); // call swap function
    }
    else
    {
        printf("Matrix sizes are not fit\n"); // if (a_size != b_size)
    }
} 

int swap(int *ptrA, int *ptrB)
{
    int i, j, temp;

    for(i = 0; i < a_size; i++)
    {
        temp = *(ptrA + i);
        *(ptrA + i) = *(ptrB + i);
        *(ptrB + i) = temp;
    } // swap element

    printf("After swap Mat A, Mat B\n");
    printf("A = [ ");

    for (i = 0; i < a_size; i++)
    {
        printf("%d ", *(ptrA + i)); // print Mat A element
    }

    printf("]\n");

    printf("B = [ ");

    for (i = 0; i < a_size; i++)
    {
        printf("%d ", *(ptrB + i)); // print Mat B element
    }

    printf("]\n\n");

    return 0;
}