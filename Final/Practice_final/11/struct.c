#include <stdio.h>

struct data
{
    char name[10];
    int age;
};

int main()
{
    struct data me = {"김윤성", 21};
    struct data you = {"박성진", 21};

    printf("%s ", me.name);
    printf("%d\n", me.age);

    printf("%s ", you.name);
    printf("%d\n", you.age);
}
