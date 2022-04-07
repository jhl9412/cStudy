#include <stdio.h>

int main()
{
	for (int idx = 0; idx < 5; idx++)
	{
		for (int jdx = 4;jdx>idx;jdx--)
		{
			printf(" ");
		}
		for (int kdx = 0; kdx < 2 * idx+1; kdx++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("=======================\n");
	for (int idx = 0; idx < 5; idx++)
	{
		for (int jdx = 5; jdx > idx; jdx--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("=========================\n");
	for (int idx = 0; idx < 5; idx++)
	{
		for (int jdx = 4; jdx > idx; jdx--)
		{
			printf(" ");
		}
		for (int kdx = 0; kdx < idx + 1; kdx++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}