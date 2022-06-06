#include <stdio.h>

#define arysize 5

double sum(double ary[], int n);

int main()
{
    int i;
    double data[arysize] = {2.5, 4.3, 5.3, 2.3, 3.4};

    for (i = 0; i < arysize; i++)
    {
        printf("%f ", data[i]);
    }
    printf("\n");
    printf("%f\n", sum(data, arysize));

    return 0;
}

double sum(double ary[], int n)
{
    int j;
    double tot = 0;
    for (j = 0; j < n; j++)
    {
        tot += ary[j];
    }

    return tot;
}