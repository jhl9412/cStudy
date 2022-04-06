#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int map[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			scanf("%d", &map[i][j]);
		}
		
	}
	int j = 1;
	int cnt = 0;

	for (int i = 1; i < 9; i++)
	{
		for (j; j < 10; j++)
		{
			
			if (map[i][j] == 2) {
				cnt = j;
				break;
			}
			map[i][j] = 9;
			if (map[i][j + 1] == 1) {
				
				cnt = j;
				break;
			}

		}
		if (map[i][cnt] == 2) {
			map[i][j] = 9;
			break;
		}
		else{
			if (map[i][cnt + 1] == 1)
				j = cnt;
		}
		if (map[i + 1][j] == 1)
			break;
		
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	return 0;
}