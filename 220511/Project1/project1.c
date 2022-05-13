#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main() {
	int num;
	int odd=0, even=0;
	scanf("%d", &num);
	int temp = num;
	while (temp != 0) {
		if ((temp % 10)% 2 == 0) {
			printf("%d", temp % 10);
			even = even * 10 + (temp % 10);
			temp = temp / 10;
		}
		else {
			temp = temp / 10;
		}
	}
	printf(" ");
	temp = num;
	while (temp != 0) {
		if ((temp % 10) % 2 == 1) {
			printf("%d", temp % 10);
			odd = odd * 10 + (temp % 10);
			temp = temp / 10;
		}
		else {
			temp = temp / 10;
		}
	}
	
	printf("\ntest2 %d %d", even, odd);
	return 0;

}