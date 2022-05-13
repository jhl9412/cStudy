#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

linkedList_h* createLinkedList_h() {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL->head = NULL;
	return DL;
}

void printList(linkedList_h* DL) {
	listNode* p;
	printf("DL = (");
	p = DL->head;
	while (p != NULL) {

		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) {
			printf(", ");
		}
	}
	printf(")\n");
}
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->llink = NULL;
		newNode->rlink = NULL;
		DL->head = newNode;
	}
	/*if (pre == NULL) return;*/
	else {
		newNode->llink = pre;
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		if (newNode->rlink != NULL) {
			newNode->rlink->llink = newNode;
		}
	}

}
void deleteNode(linkedList_h* DL, listNode* old) {
	if (DL->head == NULL|| old == NULL) return;
	if (old->llink == NULL) {
		DL->head = old->rlink;
	}
	else if (old->rlink == NULL) old->llink->rlink = NULL;
	else {
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	if (DL->head->l)
	free(old);
}
listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0)return temp;
		else temp = temp->rlink;
	}
	return temp;
}

