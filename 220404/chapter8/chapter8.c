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

	printf("두 문자열 입력 : ");
	scanf("%s %s", str3, str4);
	printf("바꾸기 전 : %s %s\n", str3, str4);
	strcpy(temp, str3);
	strcpy(str3, str4);
	strcpy(str4, temp);
	printf("바꾼 후 : %s, %s\n", str3, str4);

	char str5[80];
	int cnt = 0;

	printf("문장 입력 : ");
	gets(str5);
	for (int i = 0; str5[i] != '\0'; i++)
	{
		if (str5[i] >= 'A' && str5[i] <= 'Z')
		{
			str5[i] += 'a' - 'A'; // 아스키 코드의 차이만큼 더해서 대문자를 소문자로 바꿈.
			cnt++;
		}

	}
	printf("바뀐 문장 : ");
	puts(str5);
	printf("바뀐 문자 수 : %d", cnt);


	return 0;
}