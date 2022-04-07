#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_ary(int* pa, int size);
void input_ary(double* pa, int size);
double find_max(double* pa, int size);


int main()
{
	//int ary[3];
	//int i;
	//int* ptr = ary;

	///**(ary + 0) = 10;
	//*(ary + 1) = *(ary + 0) + 10;*/
	//ptr[0] = 10;
	//ptr[1] = ptr[0] + 10;

	//printf("세 번째 배열 요소에 키보드 입력 : ");
	//scanf("%d", &ptr[2]);

	//for (i = 0; i < 3; i++)
	//{
	//	//printf("%5d", *(ary + i));
	//	printf("%5d", ptr[i]);
	//}

	//int ary[3] = { 10,20,30 };
	//int* pa = ary;
	//int i;

	//printf("배열의 값 : ");
	//for (i = 0; i < 3; i++)
	//{
	//	//printf("%d", *pa);
	//	//pa++;
	//	printf("%d", ary[i]);
	//	//ary++;
	//}
	
	/*int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;
	int* pb = pa + 3;
	int* pc = ary;
	int* pd = pc + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	printf("pc : %u\n", pc);
	printf("pd : %u\n", pd);

	pa++;
	(*pc)++;
	printf("pb-pa : %u\n", pb - pa);
	printf("pd-pc : %u\n", pd - pc);
	printf("%d\n", ary[0]);
	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);*/

	/*int ary1[] = { 10,20,30,40,50 };
	int ary2[] = { 10,20,30,40,50,60,70 };
	
	int size1 = sizeof(ary1) / sizeof(int);
	int size2 = sizeof(ary2) / sizeof(int);

	print_ary(ary1, size1);
	print_ary(ary2, size2);*/

	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(int);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}

void print_ary(int* pa, int size)
{
	for (int idx = 0; idx < size; idx++)
	{
		printf("%5d", *(pa+idx));
	}
	printf("\n");
}

void input_ary(double* pa, int size) {
	printf("%d개의 실수값 입력 : ", size);
	for (int idx = 0; idx < size; idx++)
	{
		scanf_s("%lf", pa + idx);
	}
}

double find_max(double* pa, int size) {
	double max = pa[0];
	for (int idx = 1; idx < size; idx++)
	{
		if (pa[idx] > max) max = pa[idx];
	}
	return max;
}