#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main()
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);

	return 0;
}

void input_nums(int* lotto_nums)
{
	
	
	for (int idx = 0; idx < 6; idx++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &*(lotto_nums+idx));
		for (int jdx = 0; jdx < idx; jdx++)
		{
			if (*(lotto_nums + idx) == *(lotto_nums + jdx))
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!");
				idx--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%3d", *(lotto_nums + idx));

}