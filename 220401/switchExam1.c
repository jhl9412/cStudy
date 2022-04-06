#include <stdio.h>

int main(void)
{
	int  m = 0;
	int rank = 2;
	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		
	case 3:
		m = 100;
		
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);
	return 0;
}