#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

//linkedList_h* createLinkedList_h() {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//void freeLinkedList_h(linkedList_h* L) {
//	listNode* p;
//	while (L->head != NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
//void printList(linkedList_h* L) {
//	listNode* p;
//	printf("L = (");
//	p = L->head;
//	while (p != NULL) {
//		printf("%s", p->data);
//		p = p->link;
//		if (p != NULL)printf(",");
//	}
//	printf(")\n");
//}
//void insertFirstNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = L->head;
//	L->head = newNode;
//}
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	if (L->head == NULL) {
//		newNode->link = NULL;
//		L->head = newNode;
//	}
//	else if (pre == NULL) {
//		newNode->link = L->head;
//		L->head = newNode;
//	}
//	else {
//		newNode->link = pre->link;
//		pre->link = newNode;
//	}
//}
//void insertLastNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	listNode* temp;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = NULL;
//	if (L->head == NULL) {
//		L->head = newNode;
//		return;
//	}
//	temp = L->head;
//	while (temp->link != NULL) temp = temp->link;
//	temp->link = newNode;
//}
//void deleteNode(linkedList_h* L, listNode* p) {
//	listNode* pre;
//	if (L->head == NULL) return;
//	if (p == NULL) {
//		return;
//	}
//	else if (L->head->link == NULL) {
//		free(L->head);
//		L->head = NULL;
//	}
//	else {
//		pre = L->head;
//		while (pre->link != p) {
//			pre = pre->link;
//		}
//		pre->link = p->link;
//		free(p);
//	}
//}
//listNode* searchNode(linkedList_h* L, char* x) {
//	listNode* temp;
//	temp = L->head;
//	while (temp != NULL) {
//		if (strcmp(temp->data, x) == 0) return temp;
//		else temp = temp->link;
//	}
//	return temp;
//}



//void reverse(linkedList_h* L) {
//	listNode* p;
//	listNode* q;
//	listNode* r;
//
//	p = L->head;
//	q = NULL;
//	r = NULL;
//
//	while (p != NULL) {
//		r = q;
//		q = p;
//		p = p->link;
//		q->link = r;
//	}
//	L->head = q;
//}
//=================================================================
listNode* head;
void freeLinkedList_h(listNode* head) {
	listNode* p;
	while (head != NULL) {
		p = head;
		head = head->link;
		free(p);
		p = NULL;
	}
}
void printList(listNode* head) {
	listNode* p;
	printf("L = (");
	p = head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->link;
		if (p != NULL)printf(",");
	}
	printf(")\n");
}
void insertFirstNode(listNode* head, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = head;
	head = newNode;
}
void insertMiddleNode(listNode* head, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (head == NULL) {
		newNode->link = NULL;
		head = newNode;
	}
	else if (pre == NULL) {
		newNode->link = head;
		head = newNode;
	}
	else {
		newNode->link = pre->link;
		pre->link = newNode;
	}
}
void insertLastNode(listNode* head, char* x) {
	listNode* newNode;
	listNode* temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	newNode->link = NULL;
	if (head == NULL) {
		head = newNode;
		return;
	}
	temp = head;
	while (temp->link != NULL) temp = temp->link;
	temp->link = newNode;
}
void deleteNode(listNode* head, listNode* p) {
	listNode* pre;
	if (head == NULL) return;
	if (p == NULL) {
		return;
	}
	else if (head->link == NULL) {
		free(head);
		head = NULL;
	}
	else {
		pre = head;
		while (pre->link != p) {
			pre = pre->link;
		}
		pre->link = p->link;
		free(p);
	}
}
listNode* searchNode(listNode* head, char* x) {
	listNode* temp;
	temp = head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->link;
	}
	return temp;
}
void reverse(listNode* head) {
	listNode* p;
	listNode* q;
	listNode* r;

	p = head;
	q = NULL;
	r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p->link;
		q->link = r;
	}
	head = q;
}
