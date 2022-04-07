#include <stdio.h>

int main(void)
{
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0 ; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	*/

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++ )
		{
			printf("*");
		}
		printf("\n");

	}*/


	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = 4; j-i>0; j--)
	//	{
	//		printf(" ");
	//	}
	//	for (int k =0; k<=i;k++)
	//	printf("*");
	//	printf("\n");
	//}
	int i, j, k;
	k = 1;
	for (i = 0; i < 5; i++) {
		for (j = 5; j > k; j--) { 
			printf(" ");
		}
		for (j; j < k*2 ;j++)
			printf("*");
		k++;
		printf("\n");
	}

	return 0;
}