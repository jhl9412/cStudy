#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(char* ptr1, char* ptr2);

int main()
{
	//int ary[5] = { 0 };
	//int size = sizeof(ary) / sizeof(int);

	//for (int idx = 0; idx < size; idx++)
	//{
	//	scanf("%d", &ary[idx]);
	//}
	//printf("[");
	//for (int jdx = 0; jdx < size; jdx++)
	//{
	//	printf("%5d", ary[jdx]);
	//}
	//printf("    ]\n");
	
	/*int score[5];
	int total=0;
	double avg;

	for (int idx = 0; idx < 5; idx++)
	{
		scanf("%d", score + idx);
	}
	for (int jdx = 0; jdx < 5; jdx++)
	{
		printf("己利 : %-5d", score[jdx]);
		total = total + score[jdx];
	}
	avg = total / (sizeof(score) / sizeof(score[1]));
	printf("\n醚 钦拌 : %d\n己利 乞闭 : %.1lf",total,avg);*/

	/*int A[3] = { 1,2,3 };
	int B[10] = { 0 };

	for (int idx = 0; idx < 10; idx++)
	{
		*(B + idx) = A[idx % 3];
	}
	printf("[ ");
	for (int jdx = 0; jdx < 10; jdx++)
	{
		printf("%d ", B[jdx]);
	}
	printf("]");*/

	char str1[20] = "abcde";
	char str2[20] = "fghij";
	char temp[20];

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 : %s, str2 : %s\n", str1, str2);

	swap(str1, str2);
	printf("str1 : %s, str2 : %s", str1, str2);

	return 0;
}

void swap(char str1[], char* str2[])
{
	char temp[20];
	char* ptr1 = str1;
	char* ptr2 = str2;
	strcpy(temp, str1);
	strcpy(ptr1, str2);
	strcpy(ptr2, temp);

}