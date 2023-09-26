#include <stdio.h>
#include <stdlib.h>
#define ADD(x,y) x + y
#define MUL(x,y) (x) * (y)

// 자주 쓰는 함수를 미리 전처리단계에서 선언
int main(void) {
	
	/*
	int x = rand() % 100;
	int y = rand() % 100;

	int result = ADD(x, y);
	printf("x : %d, y : %d, ADD(x, y) = %d \n", x, y, result);

	// 곱셈 할당
	x = 5;
	y = 5;
	result = MUL((x+1), (y+1));
	printf("x : %d, y : %d, MUL(x, y) = %d \n", x, y, result);

	*/
	// 조교님
	int x = 5, y = 5;
	//printf("%d", ADD(x, y));

	printf("%d", MUL(x+1, y+1));	//괄호 필요(x+1), (y+1)
	//왜 36이 아닌 11로 출력되는지 적기 
	
	return 0;


}