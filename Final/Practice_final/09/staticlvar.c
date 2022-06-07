#include <stdio.h>

void increase(void);

int main()
{
    for(int count = 0; count < 3; count++)
    {
        increase();
    }

    return 0;
}

void increase(void)
{
    static int sindex = 1;
    int aindex = 1;
    printf("정적지역변수 sindex = %1d    , 자동지역변수 aindex = %1d\n", sindex++, aindex++);
}