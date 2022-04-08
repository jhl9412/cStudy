#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*int score[3][4];
	int total;
	double avg;
	int idx, jdx;

	for (idx = 0; idx < 3; idx++)
	{
		printf("4과목의 점수 입력 : ");
		for (jdx = 0; jdx < 4; jdx++)
		{
			scanf("%d", &score[idx][jdx]);
		}
	}

	for (idx = 0; idx < 3; idx++)
	{
		total = 0;
		for (jdx = 0; jdx < 4; jdx++)
		{
			total += score[idx][jdx];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);

	}*/

	/*char animal[5][20];
	int idx;
	int cnt;

	cnt = sizeof(animal) / sizeof(animal[0]);
	for (idx = 0; idx < cnt; idx++)
	{
		scanf("%s", animal[idx]);
	}

	for (idx = 0; idx < cnt; idx++)
	{
		printf("%s  ", animal[idx]);
	}*/

	char* pary[5];
	int idx;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (idx = 0; idx < 5; idx++)
	{
		printf("%s\n", pary[idx]);
	}



	return 0;
}