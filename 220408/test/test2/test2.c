#include <stdio.h>

void swap(int* pa, int* pb);


int main()
{
	int a = 20, b = 30;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;

}