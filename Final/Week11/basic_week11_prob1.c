#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* make_number(int lotto[]);
int check_number(int* prize[], int* f_prize[]);

int main()
{
    int lotto[7]={0}; // random array
    int* prize[1000][7]={0};
    
	int i, j, k, pnum, count=0;
    int* nums;
    int* mchnum; // match number
    int* f_prize[1]={0}; // first prize

    srand(time(NULL));
	
    for (k = 0; k < 1000 ; k++) // 1000 members
    {
        printf("%d번째 복권번호 : ", k);
        nums = make_number(lotto); // call 'make_number' funtion and store 7 numbers to nums
        for(i=0; i<7; i++) // print 7 numbers
        {
            printf("%d ", nums[i]);
            prize[k][i] = nums[i];
        }
        printf("\n");
    } 
    
    pnum = rand()%1000; // draw for the winner

    for (i = 0; i < 7; i++)
    {
        f_prize[i] = prize[pnum][i]; // store winner's lotto numbers to f_prize
    }
    
    printf("\n당첨 번호 : %d번\n", pnum); 
    printf("복권번호 : ");

    for (j = 0; j < 7; j++)
    {
        printf("%d ", f_prize[j]); // print winner's lotto numbers
    }
    printf("\n\n");

    
    printf("일치개수\n");
    for(k = 0; k < 1000; k++)
    {
        mchnum = check_number(prize[k], f_prize); // call 'check_number' function and store return value to mchnum
        printf("%d ", mchnum); // print return value
    }

	return 0;
}

int* make_number(int lotto[])
{
    int i, j, k;    

    for(i = 0; i < 7; i++) 
    {
        lotto[i]=(rand()%70+1); // random number (1 ~ 70)
        {
            for(j=0; j<i; j++) 
            {
                if(lotto[i]==lotto[j]) // if number is overlap
                {
                    i--; // recreate number
                    break;
                }  
            }
        }
    } 

    return lotto; // return value
}

int check_number(int *prize[], int* f_prize[])
{
	int i, j, k, cnt=0;

	for(i=0; i<7; i++)
    {
		for(j=0; j<i+1; j++) 
        {
			if(prize[i]==f_prize[j]) // if match number 
				cnt++; // cnt increase 1
		}
    }

	return cnt; // return value
}