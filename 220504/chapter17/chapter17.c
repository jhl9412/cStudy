#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#pragma pack(1)

struct student
{
	int num;
	double grade;
};

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
	struct student s2;
};

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision);

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];

};
struct score
{
	int kor;
	int eng;
	int math;
};

void print_list(struct address);

struct list
{
	int num;
	struct list* next;
};

struct iot
{
	int num;
	double grade;
};

typedef struct student Student;
void print_data(Student* ps);

int main()
{
	/*struct student s1;
	struct sihyung s2;
	s1.num = 2;
	s1.grade = 2.7;

	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);
	printf("%d\n", sizeof(s1));
	printf("%d", sizeof(s2));*/

	//구조체 속 구조체
	//struct profile yuni;

	//strcpy(yuni.name, "서하윤");
	//yuni.age = 20;
	//yuni.height = 180.0;

	//yuni.intro = (char*)malloc(80);
	//yuni.s2.num = 10;
	//yuni.s2.grade = 11.1;
	//printf("자기소개 : ");
	//gets(yuni.intro);

	//printf("이름 : %s\n", yuni.name);
	//printf("나이 : %d\n", yuni.age);
	//printf("키 : %.1lf\n", yuni.height);
	//printf("자기소개 : %s\n", yuni.intro);
	//printf("번호 : %d\n", yuni.s2.num);
	//printf("성적 : %.1lf\n", yuni.s2.grade);
	//printf("size %d\n", sizeof(yuni));
	//free(yuni.intro);

	//구조체 반환형 함수
	/*struct vision robot;

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %lf%lf", robot);*/
	//구조체 포인터

	//struct score yuni = { 90,80,70 };
	//struct score* ps = &yuni;

	//printf("국어 : %d\n", (*ps).kor);
	//printf("영어 : %d\n", ps->eng);
	//printf("수학 : %d\n", ps->math);
	
	//구조체 배열
	//struct address list[5] = {
	//	{"홍길동",23,"111-1111","울릉도 독도"},
	//	{"김지호",26,"112-1111","경기도 안산시"},
	//	{"강시형",26,"114-1111","서울시 강서구"},
	//	{"강현구",27,"113-1111","서울시 노원구"},
	//	{"이지훈",29,"115-1111","서울시 구로구"}
	//};
	//int i;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	//}

	//print_list;

	//자기 참조 구조체

	//struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	//struct list* head = &a, * current;
	//a.next = &b;
	//b.next = &c;

	//printf("head->num:%d\n", head->num);
	//printf("head->next->num : %d\n", head->next->num);

	//printf("list all : ");
	//current = head;
	//while (current != NULL)
	//{
	//	printf("%d  ", current->num);
	//	current = current->next;
	//}
	//printf("\n");

	//typedef 형 재정의
	Student s1 = { 315, 2.2 };
	print_data(&s1);
	return 0;
}

struct vision exchange(struct vision robot)
{
	double tmp;

	tmp = robot.left;
	robot.left = robot.right;
	robot.right = tmp;

	return robot;
}

void print_list(struct address* lp)
{
	int idx;

	for (idx = 0;idx < 5;idx++)
	{
		printf("%10s%5d%15s%20s\n", (lp + idx)->name, (lp + idx)->age, (lp + idx)->tel, (lp + idx)->addr);
	}
}

void print_data(Student* ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}