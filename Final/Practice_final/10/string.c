#include <stdio.h>

int main()
{
    char ch[] = {"c c++ c#"};
    char* p;
    int i;

    p = ch;
    printf("%s\n", ch);
    ch[5] = '\0';
    printf("분리\n");
    printf("%s\n", ch);
    printf("%s\n", (ch+6));

    printf("복구\n");
    ch[5] = ' ';

    while (*p != '\0')
    {
        printf("%c", *p++);
        i++;
    } 
}