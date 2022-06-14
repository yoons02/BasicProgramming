#include <stdio.h>

struct lecture
{
    char name[10];
    char type[10];
    int credit;
    int hours;
};

typedef struct lecture _lecture

char lectype[] = {"교양", "일반선택", "전공필수", "전공선택"};
char head[] = {"강좌명", "강좌구분", "학점", "시수"};

int main()
{
    lecture os = {"운영체제", 2, 3, 3};
    lecture c = {"c프로그래밍", 3, 3, 4};
    
}