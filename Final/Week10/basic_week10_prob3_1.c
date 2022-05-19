#include <stdio.h>

int main()
{
    int input;
    
    printf("정수 입력 : ");
    scanf(" %d", &input);

    printf("입력값 : %d\n", input);
    printf("주소값 : %u(십진수), %p(16진수)\n", &input, &input); // '&'는 주소값을 의미
    printf("주소값 : %d(십진수), %#p(16진수)\n", &input, &input); // #은 16진수 일 때 0x를 출력
    printf("주소값 크기 : %d\n", sizeof(&input)); 

    return 0;
}