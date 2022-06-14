// {3, 7, 8, 12, 2, 22, 1, 5, 9, 10}을 오름차순으로 정렬하는 프로그램을 작성하시오.
#include <stdio.h>

# define count 10
int main()
{
    int array[count] = {3, 7, 8, 12, 2, 22, 1, 5, 9, 10};
    int i, j, temp;
    
    for(i = 0; i < count; i++)
    {
        for (j = 0; j < count - i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}