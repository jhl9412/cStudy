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

	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	printf("%d\n", sizeof(s1));
	printf("%d", sizeof(s2));*/

	//����ü �� ����ü
	//struct profile yuni;

	//strcpy(yuni.name, "������");
	//yuni.age = 20;
	//yuni.height = 180.0;

	//yuni.intro = (char*)malloc(80);
	//yuni.s2.num = 10;
	//yuni.s2.grade = 11.1;
	//printf("�ڱ�Ұ� : ");
	//gets(yuni.intro);

	//printf("�̸� : %s\n", yuni.name);
	//printf("���� : %d\n", yuni.age);
	//printf("Ű : %.1lf\n", yuni.height);
	//printf("�ڱ�Ұ� : %s\n", yuni.intro);
	//printf("��ȣ : %d\n", yuni.s2.num);
	//printf("���� : %.1lf\n", yuni.s2.grade);
	//printf("size %d\n", sizeof(yuni));
	//free(yuni.intro);

	//����ü ��ȯ�� �Լ�
	/*struct vision robot;

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %lf%lf", robot);*/
	//����ü ������

	//struct score yuni = { 90,80,70 };
	//struct score* ps = &yuni;

	//printf("���� : %d\n", (*ps).kor);
	//printf("���� : %d\n", ps->eng);
	//printf("���� : %d\n", ps->math);
	
	//����ü �迭
	//struct address list[5] = {
	//	{"ȫ�浿",23,"111-1111","�︪�� ����"},
	//	{"����ȣ",26,"112-1111","��⵵ �Ȼ��"},
	//	{"������",26,"114-1111","����� ������"},
	//	{"������",27,"113-1111","����� �����"},
	//	{"������",29,"115-1111","����� ���α�"}
	//};
	//int i;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	//}

	//print_list;

	//�ڱ� ���� ����ü

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

	//typedef �� ������
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
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}