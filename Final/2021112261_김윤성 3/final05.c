#include <stdio.h>

typedef struct student
{
    char num[20];
    char name[10];
    int kor;
    int eng;
    int math;
    int total;
    int avg;
}student;

int main()
{
    int i;
    student person[4] = {{"2008112022", "김동국", 90, 85, 90, (90+85+90), (90+85+90)/3}, {"2008100311", "김영철", 90, 85, 80, (90+85+80),(90+85+80)/3}, 
    {"2008100314", "이영희", 65, 70, 100, (65+70+100),(65+70+100)/3}, {"2008100312", "홍길동", 50, 75, 90, (50+75+90), (50+75+90)/3}};
    student *p = person;

    printf("********************************************************************************\n");
    printf("    번호        이름        국어      영어     수학     총점     평균    등급\n");
    printf("********************************************************************************\n");
    for (i = 0; i < 4; i++)
    {
        printf("%s      ", p[i].num);
        printf("%s      ", p[i].name);
        printf("%3d      ", p[i].kor);
        printf("%3d      ", p[i].eng);
        printf("%3d      ", p[i].math);
        printf("%3d      ", p[i].total);
        printf("%3d      ", p[i].avg);
        if(p[i].avg >= 90)
        {
            printf("A\n");
        }
        else if ((p[i].avg >= 80)&&(p[i].avg < 90))
        {
            printf("B\n");
        }
        else if (((p[i].avg >= 70)&&(p[i].avg < 80)))
        {
            printf("C\n");
        }
        else
        {
            printf("F\n");
        }
    }
    printf("********************************************************************************\n");
}