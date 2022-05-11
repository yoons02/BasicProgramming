#include <stdio.h>

int fibo(int n); // function declaration

int main()
{
    int n;
    
    printf("Enter the number \'n\' : ");
    scanf("%d", &n); // input 'n'

    if (n >= 0)
    {
        printf("%dth value : %d\n", n, fibo(n)); // call fibo function
    }
    else
    {
        printf("Error : \'n\' is not negative\n"); // Error
    }

    return 0;
}

int fibo(n)
{
    if (n == 0) // first element
    {
        return 0;
    }
    else if (n == 1) // second element
    {
        return 1;
    }
    else if (n == 2) // third element
    {
        return 2;
    }
    else
    {
        return fibo(n-1)+fibo(n-2)+fibo(n-3); // recursive funtion
    }

    return 0;
}