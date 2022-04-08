#include <stdio.h>
#include <stdlib.h> // use rand(), srand() function
#include <time.h> // use time() fuction

int main()
{
    int random = 0; // integer valuable

	srand(time(NULL)); // create new random value every second

    printf("Second try use srand fuction\n");
	for (int i = 0; i < 10; i++) // repeat 10 times
    {
		random = rand()%9; // create random value
		printf("%d\n", random); 
	}
}