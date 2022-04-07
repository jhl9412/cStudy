
#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);


int main()
{
	
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(double);
	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값 : %.1lf\n", max);

	return 0;
}


void input_ary(double* pa, int size) {
	printf("%d개의 실수값 입력 : ", size);
	for (int idx = 0; idx < size; idx++)
	{
		scanf_s("%lf", pa + idx);
	}
}

double find_max(double* pa, int size) {
	double max = pa[0];
	for (int idx = 1; idx < size; idx++)
	{
		if (pa[idx] > max) max = pa[idx];
	}
	return max;
}