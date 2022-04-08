#include <stdio.h>

int main()
{
	for (int idx = 0; idx < 3; idx++)
	{
		for (int jdx = 5; jdx > idx*2+1; jdx--)
		{
			printf(" ");
		}
		for (int kdx = 0; kdx < idx * 2+1; kdx++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}