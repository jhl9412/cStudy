#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//int ary[3];
	//int i;
	//int* ptr = ary;

	///**(ary + 0) = 10;
	//*(ary + 1) = *(ary + 0) + 10;*/
	//ptr[0] = 10;
	//ptr[1] = ptr[0] + 10;

	//printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	//scanf("%d", &ptr[2]);

	//for (i = 0; i < 3; i++)
	//{
	//	//printf("%5d", *(ary + i));
	//	printf("%5d", ptr[i]);
	//}

	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		//printf("%d", *pa);
		//pa++;
		printf("%d", ary[i]);
		//ary++;
	}
	return 0;
}