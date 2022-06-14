#include <stdio.h>
#include <math.h>    // sqrt 함수가 선언된 헤더 파일

typedef struct Point {
    int x;
    int y;
}Point;

int main()
{
    Point p1 = {30, 20};    // 점1
    Point p2 = {60, 50};    // 점2

    int a = p2.x - p1.x;    // 선 a의 길이
    int b = p2.y - p1.y;    // 선 b의 길이

    double c = sqrt((a * a) + (b * b));    // (a * a) + (b * b)의 제곱근을 구함

    printf("%.2f\n", c);       // 42.426407

    return 0;
}