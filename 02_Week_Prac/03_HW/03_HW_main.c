#include <stdio.h>
#define SWAP(x,y,t) ((t=x), (x=y), (y=t))

int main(void) {
	/*
	int x = 1;
	int y = 2;
	int t;	// 굳이 할당 안해도 됨
	// t 값은 ? 할당 ??
	printf("SWAP전 x: %d, y : %d\n", x, y);
	SWAP(x, y, t); 
	printf("SWAP후 x: %d, y : %d\n", x, y);
	*/
	// 조교님
	int x = 1, y = 2, tmp; /
	printf("%d %d\n", x, y);
	SWAP(x, y, tmp);
	printf("%d %d\n", x, y);


	return 0;
}