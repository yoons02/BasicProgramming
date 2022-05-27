#include <stdio.h>

#define a 3
#define b 3
#define c 3
#define d 3

int main() {

	int arr1[a*b]; //행렬 A
	int arr2[c*d]; //행렬 B
	int arr3[a*d]; //행렬 C (행렬 곱 결과 값 담을 행렬)
	int i, j, k;
	int(*ptr1)[b] = arr1; // arr1[i][j] == *(*(ptr1+i)+j
	int(*ptr2)[d] = arr2; // arr2[i][j] == *(*(ptr2+i)+j
	int(*ptr3)[d] = arr3; // arr3[i][j] == *(*(ptr3+i)+j


	//행렬A 입력받기
	printf("[ 행렬 A ]\n");
	for (i = 0; i < a*b; i++) {
			scanf("%d", &(*(*(ptr1+i))));
		}
	

	//행렬B 입력받기
	printf("[ 행렬 B ]\n");
	for (i = 0; i < c*d; i++) {
			scanf("%d", &(*(*(ptr2+i))));
		}

	//행렬A 출력
	printf("[ 행렬 A ]\n");
	for (i = 0; i < b; i++) {
		for (j = 0; j < a; j++) {
			printf("%4d", (*(*(ptr1 + i) + j)));
		}
		printf("\n");
	}

	//행렬B 출력
	printf("[ 행렬 B ]\n");
	for (i = 0; i < d; i++) {
		for (j = 0; j < c; j++) {
			printf("%4d", (*(*(ptr2 + i) + j)));
		}
		printf("\n");
	}

	//행렬 곱 계산 및 출력
	for (i = 0; i < d; i++) {
		for (j = 0; j < a; j++) {
			arr3[i][j] = 0;
			for (k = 0; k < a; k++) {
				*(*(ptr3 + i) + j) += (*(*(ptr1 + i) + k)) * (*(*(ptr2 + k) + j));
			}
		}
	}

	printf("[ 행렬 곱 ]\n");
	for (i = 0; i < d; i++) {
		for (j = 0; j < a; j++) {
			printf("%4d", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}