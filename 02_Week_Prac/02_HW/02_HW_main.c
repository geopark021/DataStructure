#include <stdio.h>
#include <stdlib.h>
#define ADD(x,y) x + y
#define MUL(x,y) (x) * (y)

// ���� ���� �Լ��� �̸� ��ó���ܰ迡�� ����
int main(void) {
	
	/*
	int x = rand() % 100;
	int y = rand() % 100;

	int result = ADD(x, y);
	printf("x : %d, y : %d, ADD(x, y) = %d \n", x, y, result);

	// ���� �Ҵ�
	x = 5;
	y = 5;
	result = MUL((x+1), (y+1));
	printf("x : %d, y : %d, MUL(x, y) = %d \n", x, y, result);

	*/
	// ������
	int x = 5, y = 5;
	//printf("%d", ADD(x, y));

	printf("%d", MUL(x+1, y+1));	//��ȣ �ʿ�(x+1), (y+1)
	//�� 36�� �ƴ� 11�� ��µǴ��� ���� 
	
	return 0;


}