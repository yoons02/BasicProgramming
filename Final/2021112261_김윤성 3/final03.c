#include <stdio.h>

int main()
{
    int array[20];
    int i, j, num, count=0;

    for(i = 0; i < 20; i++)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    printf("search num : ");
    scanf("%d",&num);

    for(j = 0; j < 20; j++)
    {
        if(array[j] == num)
        {
            count++;
        }
    }

    printf("%d번 검색됨\n", count);

}