#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//malloc 예제
	//int* pi;
	//int i, sum = 0;

	//pi = (int*)malloc(sizeof(int));

	//if (pi == NULL)
	//{
	//	printf("메모리가 부족합니다.");
	//	exit(1);
	//}

	//printf("다섯 명의 나이를 입력하세요");
	//for (i = 0; i < 5; i++)
	//{
	//	scanf("%d", &pi[i]);
	//	sum += pi[i];
	//}

	//printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	//free(pi);
	
	//calloc, realloc 예제
	//int* pi;
	//int size = 5;
	//int count = 0;
	//int num, i;

	//pi = (int*)calloc(size, sizeof(int));

	//while (1)
	//{
	//	printf("양수만 입력");
	//	scanf("%d", &num);
	//	if (num <= 0)break;
	//	if (count == size)
	//	{
	//		size += 5;
	//		pi = (int*)realloc(pi, size * sizeof(int));
	//	}
	//	pi[count++] = num;
	//}

	//for (i = 0; i < count; i++)
	//{
	//	printf("%5d", pi[i]);
	//}

	//free(pi);

	//문자열 동적할당

	return 0;
}