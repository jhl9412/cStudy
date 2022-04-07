#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void str_print(char* m_str);
void my_gets(char * ps);
char* my_strcpy(char* pd, char* ps);
int my_strlen(char* ps);


int main()
{
	/*char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	gets(str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);*/
	
	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	
	strcpy(ps1, "sfdjkls");
	printf("바뀐 문자열 : %s\n", str2);
	
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);
	
	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);
	
	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);*/

	char str[80] = "strawberry";
	printf("바뀌기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple");
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "banana"));

	int size = my_strlen(str);
	printf("%s  %d\n",str, size);


	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) resp = str1;
	else resp = str2;
	printf("이름이 긴 과일은 : %s\n", resp);

	char str3[80] = "pear";
	char str4[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str3, str4) > 1) printf("%s", str3);
	else printf("%s", str4);

	return 0;

}

void str_print(char* m_str)
{
	int cnt = 0;
	char s1[100] = { 0 };
	while (*m_str != '\0')
	{
		s1[cnt] = *m_str;
		cnt++;
		m_str++;
	}
	s1[cnt] = '\0';
	printf("배열 문자열 변환 : %s\n", s1);

}

void my_gets(char* ps)
{
	char ch;

	while ((ch = getchar())!='\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
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

int my_strlen(char* ps)
{
	int cnt = 0;

	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}
	return cnt;
}