#include <stdio.h>

int add(int x, int y);

void print_char(char ch, int count);

void fruit(int cnt);

int main(void)
{

	int a = 10, b = 20;
	int res;

	res = add(a, b);
	printf("result : %d\n",res);

	print_char('@', 5);

	fruit(1);

	return 0;
}

int add(int x, int y)
{
	int temp = x + y;
	return temp;//return은 레지스터에 잠시 머무른다.
}

void print_char(char ch, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
	return;
}

void fruit(int cnt)
{
	printf("apple\n");
	if (cnt == 3) return;
	fruit(cnt + 1);
	printf("jam\n");
} 