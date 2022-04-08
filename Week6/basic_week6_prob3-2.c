#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random = 0; // integer valuable

    srand(time(NULL)); // create new random value every second

    printf("Second try use srand function\n");
    for (int i = 0; i < 10; i++) // repeat 10 times
    {
        random = rand()%9; // create random value
        printf("%d\n", random);
    }
}