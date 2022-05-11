#include <stdio.h>

int main()
{
    float len[3] = {0.0, 0.0, 0.0}; // length array
    int j,k; // integer valuable
    float temp, sum;

    printf("Enter the angle of 1st length : ");
    scanf("%f", &len[0]); // input first lenth, type : float

    printf("Enter the angle of 2nd length : ");
    scanf(" %f", &len[1]); // input second length, type : float

    printf("Enter the angle of 3rd length : ");
    scanf(" %f", &len[2]); // input third length, type : float

    for(j=0;j<2;j++) // repeat 3 times
    {
        for(k=0;k<2;k++)
        {
            if(len[k] > len[k+1]) //comparison value
            {
                temp = len[k]; // assign large value to temp
                len[k] = len[k+1]; // assign small value in front of array
                len[k+1] = temp; // assign large value after of array
            }
        }
    }

    sum = len[0]*len[0]+len[1]*len[1]; // sum = a^2+b^2 (a,b<c)

    if (len[0]+len[1] > len[2]) // triangular condition
        if (sum > len[2]*len[2]) // Acute triangle condition
            if ((len[0] == len[1])&&(len[1] == len[2])) // equal all value
            {
                printf("정삼각형입니다.\n");
            }
            else 
            {
                printf("예각삼각형입니다.\n");
            }
        else if (sum == len[2]*len[2]) // right triangle condition
        {
            printf("직각삼각형입니다.\n");
        }
        else // obtuse triangle
        {
            printf("둔각삼각형입니다.\n");
        }
    else // not correct triangle condition (len[0]+len[1] < len[2])
    {
        printf("삼각형이 아닙니다.\n");
    }
    
    return 0;
}