#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	int score[] = { 1,2,3,4,5 };
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
		scanf("%d", &score[i]);
	for (i = 0; i < count; i++)
		total += score[i];
	avg = total / (double)count;
	for (i = 0; i < count; i++)
		printf("%5d", score[i]);
	printf("\n");
	printf("��� : %.1lf\n", avg);

	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s %s\n", str1, str2);

	*/


	char arr[6] = "abc";
	*(arr) = 'b';

	return 0;
}