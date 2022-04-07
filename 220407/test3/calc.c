#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec_func(int n);

int main()
{
	/*int a, b, res;
	char cal;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &cal, &b);
	switch (cal)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '/':
		res = a / b;
		break;
	case '*':
		res = a * b;
		break;
	}
	printf("%d", res);*/

	/*int num=1;
	int cnt = 1;
	
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	

	for (int idx = 2; idx < num + 1; idx++)
	{
		int st = 0;
		for (int jdx = 2; jdx < idx; jdx++)
		{
			if (idx % jdx == 0)
			{
				st = 1;
				break;
			}
		}
		if (st == 0)
		{
			cnt++;
			printf("%5d", idx);
		}
		else continue;
		if (cnt % 5 == 0)
		{
			printf("\n");
		}
	}*/

	int n = 100;
	int res = rec_func(n);
	printf("%d", res);

	return 0;
}
	
int rec_func(int n)
{
	if (n == 0) return 0;
	
	int res = n + rec_func(n - 1);

	return res;
}