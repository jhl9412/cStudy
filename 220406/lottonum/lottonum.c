#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main()
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	//print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	int i;
	*lotto_nums = 0;
	for (i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &*(lotto_nums+i));
		for (int j = 0; j < i; j++)
		{
			if (*(lotto_nums + i) == *(lotto_nums + j))
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++)
		printf("%3d", *(lotto_nums + i));

}