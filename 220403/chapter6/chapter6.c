#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == j || i + j == 4) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n"); 

	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		int pn = 1;

		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				pn = 0;
				break;
			}
		}

		if (pn == 1) {
			printf("%5d", i);
			cnt++;
			if (cnt % 5 == 0) printf("\n");
		}
	}

	return 0;
}