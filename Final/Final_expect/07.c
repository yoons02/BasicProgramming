// 다음 내용을 참고로 구조체 employee를 정의하고, 직원 4명을 선언하여 적당한 값을 입력하고 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#define member 4

typedef struct employee
{
    char name[10];
    int age;
    int pee;
}employee;

int main()
{
    int i;
    employee p[member] = {{"김윤성", 21, 40000},{"심대우", 21, 16000},{"박성진", 21, 13000},{"이승준", 21, 17000}};

    for (i = 0; i < member; i++)
    {
        printf("%s ", p[i].name);
        printf("%d ", p[i].age);
        printf("%d ", p[i].pee);
        printf("\n");
    }

    return 0;
}