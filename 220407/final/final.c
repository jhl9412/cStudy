#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rec(int n);
void print_ary(int* pa, int size);
void swap(int* x, int* y);

int main()
{
	int num = 7;

	for (int idx = 0; idx < num; idx++)
	{
		for (int jdx = num; jdx > idx; jdx--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (int idx = 0; idx < num; idx++)
	{
		for (int jdx = 0; jdx < idx; jdx++)
		{
			printf(" ");
		}
		for (int kdx = num; kdx > idx ; kdx--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for (int idx = 0; idx < num; idx++)
	{
		for (int jdx = num; jdx > idx+1; jdx--)
		{
			printf(" ");
		}
		for (int kdx = 0; kdx < idx + 1; kdx++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	int max = 100;
	int cnt = 0;
	for (int idx = 2; idx < max; idx++)
	{
		int st = 1;
		for (int jdx = 2; jdx < idx; jdx++)
		{
			if (idx % jdx == 0)
			{
				st = 0;
				break;
			}
		}

		if (st == 1)
		{
			printf("%5d", idx);
			cnt++;
			if (cnt % 5 == 0)
			{
				printf("\n");
			}
		}
		
	}
	printf("\n");

	int n = 100;
	int res = rec(n);
	printf("%d\n", res);

	int ary[] = { 0,1,2,3,4,5,6,7 };
	int size = sizeof(ary) / sizeof(ary[0]);
	print_ary(ary, size);

	int a = 10, b = 20;
	printf("Àü : %5d,%5d\n", a, b);
	swap(&a, &b);
	printf("ÈÄ :%5d,%5d\n", a, b);
	
	
	return 0;
}

int rec(int n)
{
	if (n == 0) return 0;

	int sum = n + rec(n - 1);

	return sum;
}

void print_ary(int* pa, int size)
{
	for (int idx = 0; idx < size; idx++)
	{
		printf("%5d", *(pa + idx));
	}
	printf("\n");
}

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}