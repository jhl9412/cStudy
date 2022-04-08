#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int prime_check(int n);

int main()
{
	int n;

	printf("#양수 입력 : ");
	scanf("%d", &n);
	
	prime_check(n);

	return 0;
}

int prime_check(int n)
{
	int cnt = 0;

	for (int idx = 2; idx <= n; idx++)
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

}