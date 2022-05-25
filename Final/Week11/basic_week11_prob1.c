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
    int* f_prize;

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
    f_prize = prize[pnum];
    printf("\n당첨 번호 : %d번\n", pnum); 
    printf("복권번호 : ");

    // f_prize = prize[pnum];
    for (j = 0; j < 10; j++)
    {
        printf("%d ", f_prize[j]);
    }
    printf("\n\n");

    // count=check_number(prize[], lotto[]); 
	// 번호 당 알치 개수 배열 입력
	// printf("\n\n%d개의 번호 일치\n", count[]); // 일치하는 숫자 개수 표시

    
    printf("일치개수\n");
    for(k = 0; k < 1000; k++)
    {
        crnum = check_number(prize[k], f_prize);
        printf("%d ", crnum); // nums 포인터에 숫자 7개 저장
    }

	
	return 0;
}

int* make_number(int lotto[])
{
    int i, j, k;    

    for(i = 0; i < 7; i++) 
    {
        lotto[i]=(rand()%70+1); // 1~45까지의 랜덤 숫자 생성 
        {
            for(j=0; j<i; j++) 
            {
                if(lotto[i]==lotto[j])// 겹친번호가 있으면 번호를 다시 생성한다. 
                {
                    i--;
                    break;
                    // for (k = 1; k <= 1000; k++)
                    // {
                    //     int prize[k] = lotto[2];
                    // }
                }  
            }
        }
    } 

    return lotto;
}

int check_number(int *prize[], int* f_prize[]) // 입력받은 값과 로또값이 일치하는지 확인해준다. 
{
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

// int f_prize(int prize[])
// {
//     int pnum;
    
//     pnum = rand()%70+1;
//     return prize[pnum];
// }