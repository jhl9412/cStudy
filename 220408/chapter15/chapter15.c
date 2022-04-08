#include <stdio.h>

void print_str(char** pps, int cnt);
int sum(int, int);

int main()
{

	/*int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("------------------------------------------------\n");
	printf("변수   변숫값   &연산   *연산     **연산 \n");
	printf("------------------------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("------------------------------------------------\n");*/

	char* ptr_ary[] = { "eagle","tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary,count);

	int(*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);

	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.lf\n", *(double*)vp);




	return 0;
}

void print_str(char** pps, int cnt)
{
	int idx;

	for (idx = 0; idx < cnt; idx++)
	{
		printf("%s\n", pps[idx]);
	}
}

int sum(int a, int b)
{
	return (a + b);
}