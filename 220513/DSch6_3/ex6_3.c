#include "LinkedQueue.h"

int main() {
	LQueueType* LQ = createLinkedQueue();
	element data;
	printf("\n ***** 연결 큐 연산 ***** \n");
	printf("\n insert A>>"); enLQueue(LQ, 'A'); printLQ(LQ);
	printf("\n insert B>>"); enLQueue(LQ, 'B'); printLQ(LQ);
	printf("\n insert C>>"); enLQueue(LQ, 'C'); printLQ(LQ);
	data = peekLQ(LQ); printf(" peek item : %c \n", data);
	printf("\n delete >>"); data = deLQueue(LQ); printLQ(LQ);
	printf("\t deleted data : %c", data);
	printf("\n delete >>"); data = deLQueue(LQ); printLQ(LQ);
	printf("\t\t deleted data : %c", data);
	printf("\n delete >>"); data = deLQueue(LQ); printLQ(LQ);
	printf("\t\t deleted data : %c", data);
	printf("\n insert D>>"); enLQueue(LQ, 'D'); printLQ(LQ);
	printf("\n insert E>>"); enLQueue(LQ, 'E'); printLQ(LQ);
}