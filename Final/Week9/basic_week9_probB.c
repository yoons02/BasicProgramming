#include <stdio.h>

int fibo(int n);

int main(void){
	int n;
	int i;

	printf("\n피보나치 수 입력 : \n" );
	scanf("%d" , &n) ;

	for(i = 0 ; i < n ; i++ ){
		printf("%d " , fibo(i));
	}

	printf("\n\n");

	return 0;

}

int fibo(int n)
{
	if(n == 0) return 0;
	else 
		if(n == 1) return 1;
	else 
		return fibo(n-1) + fibo(n-2) + fibo;
}