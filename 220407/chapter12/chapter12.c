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

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	gets(str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);*/
	
	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	
	strcpy(ps1, "sfdjkls");
	printf("�ٲ� ���ڿ� : %s\n", str2);
	
	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	
	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	
	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);*/

	char str[80] = "strawberry";
	printf("�ٲ�� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple");
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "banana"));

	int size = my_strlen(str);
	printf("%s  %d\n",str, size);


	char str1[80], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) resp = str1;
	else resp = str2;
	printf("�̸��� �� ������ : %s\n", resp);

	char str3[80] = "pear";
	char str4[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
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
	printf("�迭 ���ڿ� ��ȯ : %s\n", s1);

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