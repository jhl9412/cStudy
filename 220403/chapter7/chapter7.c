#include <stdio.h>

int sum(int i);
int func(int i);
int poly(int i);
int rec_func(int n);

int main(void)
{
	sum(10);
	sum(100);
	
	printf("%d\n", func(-3));
	
	printf("%d\n", rec_func(10));
	return 0;
}

int sum(int i)
{
	int res = 0;
	for (int j = 0; j <= i; j++)
	{
		res += j;
	}
	return printf("%d\n",res);
}

int func(int n)
{
	int res;
	res = poly(n);
	if (res >= 0) return res;
	else return -res;

}

int poly(int n)
{
	return(2 * n * n + 3 * n);
}

int rec_func(int n)
{	
	/*static int ress = 0;
	ress += n--;

	if (n == 0) return ress;
	else if (n > 0) rec_func(n);
	else return(printf("양수를 입력하세요."));*/

	int res=0;
	if (n > 0) {
		res = n + rec_func(n - 1);
	}
	return res;

}