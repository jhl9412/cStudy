#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int x, int y);

int main()
{
	/*int a=10000000;
	double b=10.0;
	char c;
	int* ptr = &a;
	printf("int�� ������ �ּ� : %u\n",&a);
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);*/

	/*int a = 10, b = 15, tot;
	double avg;
	int* pa, * pb;
	int* pt = &tot;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);*/

	/*int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a �� : %d\n", *pa);*/

	/*char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� : %d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));*/

	/*double a = 3.4;
	double* pd = &a;
	int* pi;
	pi = (int*)pd;
	printf("%d, %.2lf", pi, pd);*/

	int a = 10, b = 20;
	
	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);


	return 0;
 }

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*  y = temp;
}


