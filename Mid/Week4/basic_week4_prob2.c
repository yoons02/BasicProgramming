#include <stdio.h> 
#include <limits.h> // Output char and integer MAX, MIN header file
#include <float.h> // Output float and double MAX, MIN header file

int main()
{
    double c_min, c_max;
    double i_min, i_max;
    double f_min, f_max;
    double d_min, d_max;

    c_min = CHAR_MIN; // char minimum valuable
    c_max = CHAR_MAX; // char maximun valuable

    i_min = INT_MIN; // integer minimun valuable
    i_max = INT_MAX; // integer maximun valuable
    
    f_min = FLT_MIN; // float minimun valuable
    f_max = FLT_MAX; // float maximun valuable 
    
    d_min = DBL_MIN; // double minimun valuable
    d_max = DBL_MAX; // double maximun valuable

    printf("char data range = %e ~ %e\n", c_min,c_max); // print char range
    printf("integer data range = %e ~ %e\n", i_min,i_max); // print integer range
    printf("float data range = %e ~ %e\n", f_min,f_max); // print float range
    printf("double data range = %e ~ %e\n", d_min,d_max); // print double range

    return 0;
}