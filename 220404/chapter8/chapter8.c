#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str1[80] = "banana apple";
	printf("%s \n", str1);
	strcpy(str1, "apple banana" );

	printf("%s",str1);

	char str2[80];
	//scanf("%s", &str2);
	gets(str2);
	//printf("%s", str2);
	
	puts(str2);

	char str3[80], str4[80];
	char temp[80];

	printf("�� ���ڿ� �Է� : ");
	scanf("%s %s", str3, str4);
	printf("�ٲٱ� �� : %s %s\n", str3, str4);
	strcpy(temp, str3);
	strcpy(str3, str4);
	strcpy(str4, temp);
	printf("�ٲ� �� : %s, %s\n", str3, str4);

	char str5[80];
	int cnt = 0;

	printf("���� �Է� : ");
	gets(str5);
	for (int i = 0; str5[i] != '\0'; i++)
	{
		if (str5[i] >= 'A' && str5[i] <= 'Z')
		{
			str5[i] += 'a' - 'A'; // �ƽ�Ű �ڵ��� ���̸�ŭ ���ؼ� �빮�ڸ� �ҹ��ڷ� �ٲ�.
			cnt++;
		}

	}
	printf("�ٲ� ���� : ");
	puts(str5);
	printf("�ٲ� ���� �� : %d", cnt);


	return 0;
}