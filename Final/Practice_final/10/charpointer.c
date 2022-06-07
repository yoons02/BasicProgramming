#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    char* java = "java";
    printf("%s", java);

    while (java[i] != '\0')
    {
        printf("%c", java[i]);
        i++;
    }

    while (*(java+j) != '\0')
    {
        printf("%c", *(java+j));
        j++;
    }

    return 0;
}