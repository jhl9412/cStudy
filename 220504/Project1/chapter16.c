#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//malloc ����
	//int* pi;
	//int i, sum = 0;

	//pi = (int*)malloc(sizeof(int));

	//if (pi == NULL)
	//{
	//	printf("�޸𸮰� �����մϴ�.");
	//	exit(1);
	//}

	//printf("�ټ� ���� ���̸� �Է��ϼ���");
	//for (i = 0; i < 5; i++)
	//{
	//	scanf("%d", &pi[i]);
	//	sum += pi[i];
	//}

	//printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	//free(pi);
	
	//calloc, realloc ����
	//int* pi;
	//int size = 5;
	//int count = 0;
	//int num, i;

	//pi = (int*)calloc(size, sizeof(int));

	//while (1)
	//{
	//	printf("����� �Է�");
	//	scanf("%d", &num);
	//	if (num <= 0)break;
	//	if (count == size)
	//	{
	//		size += 5;
	//		pi = (int*)realloc(pi, size * sizeof(int));
	//	}
	//	pi[count++] = num;
	//}

	//for (i = 0; i < count; i++)
	//{
	//	printf("%5d", pi[i]);
	//}

	//free(pi);

	//���ڿ� �����Ҵ�

	return 0;
}