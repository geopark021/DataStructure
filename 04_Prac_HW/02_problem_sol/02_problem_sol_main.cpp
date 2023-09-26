#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
typedef char element;
typedef struct {
	element data[SIZE];
	int rear, front;
}QueueType;

void init(QueueType* Q) {
	Q->rear = Q->front = -1;
}


int isFull(QueueType* Q){
	return (Q->rear == SIZE - 1);
}


int isEmpty(QueueType* Q) {
	return Q->front == Q->rear;
}

void enqueue(QueueType *Q, element e){
	if(isFull(Q)) {
		printf("큐 꽉 참\n");

	}
	else {
		Q->rear++;
		Q->data[Q->rear] = e;
	}
}

element dequeue(QueueType* Q) {
	if (isEmpty(Q)) {
		printf("큐 빔\n");
		return 0;
	}
	else {
		Q->front++;
		return Q->data[Q->front];
	}
}


void printQueue(QueueType* Q) {
	printf("Front: %d\n Rear: %d\n", Q->front, Q->rear);
	int i;
	// 큐의 초기화는 -1이므로 +1한 것을 시작으로한다.
	for (i = Q->front + 1; i <= Q->rear; i++) {
		printf("%c ", Q->data[i]);

	}
	printf("\n");
}

int main() {
	QueueType Q; // 구조체 변수이지 구조체 포인터 변수 아님
	init(&Q);

	enqueue(&Q, 'A');
	enqueue(&Q, 'B');
	enqueue(&Q, 'C');
	printQueue(&Q);
	dequeue(&Q);
	dequeue(&Q);
	dequeue(&Q);
	printQueue(&Q);
	
	
	return 0;
}