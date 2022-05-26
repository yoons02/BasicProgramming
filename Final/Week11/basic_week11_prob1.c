#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* make_number(int lotto[]);
int check_number(int* prize[], int* f_prize[]);
void result(int n);

int main()
{
    int lotto[7]={0};
    int correct[7]={0};
    int* prize[1000][7]={0};
    
	int i, j, k, pnum, count=0;
    int* nums;
    int* crnum;
    int* f_prize[1]={0};

    srand(time(NULL));
	
    for (k = 0; k < 1000 ; k++) // 1000명
    {
        printf("%d번째 복권번호 : ", k);
        nums = make_number(lotto); // nums 포인터에 숫자 7개 저장
        for(i=0; i<7; i++) // 숫자 7개 출력
        {
            printf("%d ", nums[i]);
            prize[k][i] = nums[i];
        }
        printf("\n");
    } 
    
    pnum = rand()%1000;

    for (i = 0; i < 7; i++)
    {
        f_prize[i] = prize[pnum][i]; // 당첨번호는 f_prize라는 또다른 변수에 할당
    }
    
    printf("\n당첨 번호 : %d번\n", pnum); 
    printf("복권번호 : ");

    for (j = 0; j < 7; j++)
    {
        printf("%d ", f_prize[j]);
    }
    printf("\n\n");

    
    printf("일치개수\n");
    for(k = 0; k < 1000; k++)
    {
        crnum = check_number(prize[k], f_prize);
        printf("%d ", crnum); 
    }

	return 0;
}

int* make_number(int lotto[])
{
    int i, j, k;    

    for(i = 0; i < 7; i++) 
    {
        lotto[i]=(rand()%70+1); 
        {
            for(j=0; j<i; j++) 
            {
                if(lotto[i]==lotto[j])// 겹친번호가 있으면 번호를 다시 생성한다. 
                {
                    i--;
                    break;
                }  
            }
        }
    } 

    return lotto;
}

int check_number(int *prize[], int* f_prize[])
{ // 1등 번호와 다른 번호를 비교
	int i, j, k, cnt=0;

	for(i=0; i<7; i++)
    {
		for(j=0; j<i+1; j++) 
        {
			if(prize[i]==f_prize[j]) // 일치하면 cnt변수 증가 
				cnt++;
		}
    }

	return cnt; // 일치하는 개수를 반환해준다.
}