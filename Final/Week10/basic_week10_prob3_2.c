#include <stdio.h>

int main()
{
    int a[4] = {2, 6, 1, 3};
    int* pa = &a[0]; // 포인터는 배열을 따라감

    printf("%d %d %d %d\n", *(pa), *(pa+1), *(pa+2), *(pa+3)); // 한 요소씩 출력
    printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]); // 똑같이 출력

    printf("%d ", ++*pa); //++(a[0])
    printf("%d ", *++pa); // (a[1])
    printf("%d ", *pa++); // (a[1]++)
    printf("%d ", --*pa++); //--((a[2]++))
    printf("%d\n", (*pa)--); //(a[3]--)
    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);

    return 0;
}
