#include <stdio.h>

int main()
{
    char inputAl; // character variable
    int i; // integer variable

    for (i = 1; i <= 5; i++) // increasing one by one from one to five
    {
        printf("Enter the Alphabet in lowercase : ");
        scanf(" %c", &inputAl); // input character variable
        inputAl = inputAl-32; // convert frome lower to upper case by using ASCII code number
        printf("Convert Alpabet(from lower to uppercase) : %c\n",inputAl);
    }

    return 0;
}