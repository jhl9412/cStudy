#include <stdio.h>

int* sum(int a, int b);

int main()
{
	int* resp;
	resp = sum(10, 20);
 	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int* sum(int a, int b)
{
int ress;

	ress = a + b;
	return &ress;

}