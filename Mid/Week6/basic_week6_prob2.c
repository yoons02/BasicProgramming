#include <stdio.h>
#include <math.h> // use sqrt function

int main()
{
    float a,b,r,x,y,dis; // float valuable

    printf("Enter the coordinates of the center of the circle (a,b) : ");
    scanf("%f,%f", &a,&b); // input and assign value each, type : float, use comma for division value

    printf("Enter the radius of the circle \'r\' : ");
    scanf(" %f", &r); // input and assign value, type : float

    printf("Enter the coordinates of points to check (x,y) : ");
    scanf(" %f,%f", &x,&y); // input and assign value, type : float, use comma division value

    dis = sqrt((x-a)*(x-a)+(y-b)*(y-b)); // distance between center of circle and input points

    if (dis > r)
    {
        printf("Out of the circle\n"); // Not inside the circle
    }
    else if (dis < r)
    {
        printf("Inside the circle\n");
    }
    else 
    {
        printf("On the circle\n"); // exists above the circle
    }

    return 0;
}