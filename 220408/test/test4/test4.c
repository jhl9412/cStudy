#include <stdio.h>

void print_ary(int* pa, int size);

int main()
{
	int ary1[] = { 10, 20, 30, 40, 50 };
	int ary2[] = { 10, 20, 30, 40, 50, 60, 70 };
	
	print_ary(ary1, sizeof(ary1) / sizeof(ary1[0]));
	
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

void print_ary(int* pa, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
	printf("\n");
}