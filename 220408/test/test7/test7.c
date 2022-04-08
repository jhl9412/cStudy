#include <stdio.h>

int my_strcmp(char* pd, char* ps);
char* my_strcat(char* pd, char* ps);

int main()
{

	char str1[20] = "apple";
	char str2[20] = "apartment";

	int n = my_strcmp(str1, str2);
	if (n == 1)
		printf("사전에 먼저 나오는 문자열 : %s\n", str1);
	else if (n == -1)
		printf("사전에 먼저 나오는 문자열 : %s\n", str2);
	else printf("문자열이 같다.\n");
	
	
	my_strcat(str1, str2);
	printf("%s",str1);

	return 0;
}

int my_strcmp(char* pd, char* ps)
{
	while ((*(pd++) == *(ps++))) {}
	if (*pd > *ps) return 1;
	else if (*pd < *ps) return -1;
	else return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd;
	while (*(pd++) != '\0') {}
	while (*(ps++) != '\0')
	{
		*(pd++) = *ps;
	}
	*pd = '\0';
	return po;
}