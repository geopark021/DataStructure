#include <stdio.h>
#define SWAP(x,y,t) ((t=x), (x=y), (y=t))

int main(void) {
	/*
	int x = 1;
	int y = 2;
	int t;	// ���� �Ҵ� ���ص� ��
	// t ���� ? �Ҵ� ??
	printf("SWAP�� x: %d, y : %d\n", x, y);
	SWAP(x, y, t); 
	printf("SWAP�� x: %d, y : %d\n", x, y);
	*/
	// ������
	int x = 1, y = 2, tmp; /
	printf("%d %d\n", x, y);
	SWAP(x, y, tmp);
	printf("%d %d\n", x, y);


	return 0;
}