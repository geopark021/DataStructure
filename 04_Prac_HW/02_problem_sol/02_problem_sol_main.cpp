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
		printf("ť �� ��\n");

	}
	else {
		Q->rear++;
		Q->data[Q->rear] = e;
	}
}

element dequeue(QueueType* Q) {
	if (isEmpty(Q)) {
		printf("ť ��\n");
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
	// ť�� �ʱ�ȭ�� -1�̹Ƿ� +1�� ���� ���������Ѵ�.
	for (i = Q->front + 1; i <= Q->rear; i++) {
		printf("%c ", Q->data[i]);

	}
	printf("\n");
}

int main() {
	QueueType Q; // ����ü �������� ����ü ������ ���� �ƴ�
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