#include <stdio.h>

typedef struct _person
{
    char name[10];
    int age;
}person;

int main()
{
    person p1[] = {{"김윤성", 21}, {"심대우", 21}};

    printf("내 이름은 %s\n", p1[0].name);
    printf("내 나이는 %d\n\n", p1[0].age);
    printf("얘 이름은 %s\n", p1[1].name);
    printf("얘 나이는 %d\n", p1[1].age);

    return 0;
}