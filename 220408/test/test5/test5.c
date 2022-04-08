#include <stdio.h>

char* my_strcpy(char* pd, char* ps);

int main()
{
	char str[20] = "strawberry";
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);


}

char* my_strcpy(char* pd, char* ps)
{
	char* po = pd;

	while (*ps != '\0')
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}