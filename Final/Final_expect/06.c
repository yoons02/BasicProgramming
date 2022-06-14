// 표에 주어진 학생들의 합과 평균을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
struct student
{
    float height;
    float weight;
};

int main()
{
    float avg_hei, avg_wei;
    int i, j;
    struct student array[5] = {{180.2, 80}, {178.3, 65.3}, {160.4, 54.3}, {190.4, 90.4}, {175.3, 70.5}};

    for(i = 0; i < 5; i++)
    {
        avg_hei += array[i].height;   
    }
    avg_hei = avg_hei/5;

    for(i = 0; i < 5; i++)
    {
        avg_wei += array[i].weight;   
    }
    avg_wei = avg_wei/5;

    printf("신장 평균 : %.1f\n", avg_hei);
    printf("몸무게 평균 : %.1f\n", avg_wei);
}