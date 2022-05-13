#pragma once

typedef struct ListNode {
	char data[4];
	struct ListNode* link;
}listNode;

//typedef struct {
//	listNode* head;
//}linkedList_h;
//
//linkedList_h* createLinkedList_h();
//void freeLinkedList_h(linkedList_h* L);
//void printList(linkedList_h* L);
//void insertFirstNode(linkedList_h* L, char* x);
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);
//void insertLastNode(linkedList_h* L, char* x);
//void deleteNode(linkedList_h* L, listNode* p);
//listNode* searchNode(linkedList_h* L, char* x);
//void reverse(linkedList_h* L);

//======================================================================

void freeLinkedList_h(listNode* head);
void printList(listNode* head);
void insertFirstNode(listNode* head, char* x);
void insertMiddleNode(listNode* head, listNode* pre, char* x);
void insertLastNode(listNode* head, char* x);
void deleteNode(listNode* head, listNode* p);
listNode* searchNode(listNode* head, char* x);
void reverse(listNode* head);

