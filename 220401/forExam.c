#include <stdio.h>

int add()
{
	static int sum = 1;
	return sum++;
}
int main(void)
{
	add();
	add();
	int a=0;
	int i;
	for (i = 0; i < 3; i++)
	{

		a += 2;
	}
	printf("a : %d\n i : %d", a, i);
	printf("%d", add());
	return 0;
}