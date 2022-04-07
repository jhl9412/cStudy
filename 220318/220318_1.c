#include <stdio.h>
#include <string.h>


int main()
{

	char cal[]="11/3";
	char *ptr = strtok(cal, " / ");

	int a;
		a = (int)ptr;

	printf("%d", (int)ptr/2);



	return 0;

}