#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *x, int *y);
void swap_char(char* ptr1, char* ptr2);
int main()
{
	int num1 = 10;
	int num2 = 20;

	swap(&num1, &num2);
	printf("num 1 : %d, num2 : %d\n", num1, num2);

	char str1[20] = "go";
	char str2[20] = "home";
	printf("%s %s\n", str1, str2);
	swap_char(str1, str2);
	printf("%s %s\n", str1, str2);
}

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}

void swap_char(char* ptr1, char* ptr2)
{
	char temp[20];
	strcpy(temp, ptr1);
	strcpy(ptr1, ptr2);
	strcpy(ptr2, temp);   
}
