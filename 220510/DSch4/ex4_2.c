#include <stdio.h>	
#include <stdlib.h>
#include "LinkedList.h"

int L;


int main() {


	listNode* p;
	listNode* head = (listNode*)malloc(sizeof(int));
	head = NULL;
	printf("(1)����Ʈ�� [��],[��],[��] ��� �����ϱ�! \n");
	insertLastNode(head, "��");
	insertLastNode(head, "��");insertLastNode(head, "��");
	printList(head);

	printf("\n(2)����Ʈ���� [��] ��� Ž���ϱ�! \n");
	p = searchNode(head, "��");
	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("\n(3)����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�! \n");
	insertMiddleNode(head, p, "��");
	printList(head);

	printf("\n (4)����Ʈ���� [��]��� �����ϱ�!\n");
	p = searchNode(head, "��");
	deleteNode(head, p);
	printList(head);

	printf("\n(5) ����Ʈ ������ �������� �ٲٱ�!\n");
	reverse(head);
	printList(head);

	freeLinkedList_h(head);
	getchar();

	return 0;
}