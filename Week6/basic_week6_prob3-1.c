#include <stdio.h>
#include <stdlib.h> // use rand() function

int main()

{
	int random = 0; // integer valuable

	printf("Second try\n");
	for (int i = 0; i < 10; i++) // repeat 10 times
    { 
		random = rand()%5; // create random value

		printf("%d\n", random);
	}
}
