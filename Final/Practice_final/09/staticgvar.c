#include <stdio.h>

void increase(void);

int svar = 0;
int main()
{
    int count;

    for (count = 0; count < 5; count++)
    {
        increase();
    }
    printf("함수가 %d번 작동했습니다.\n", svar);

    return 0;
}

void increase(void)
{
    svar++;
}