#include <stdio.h>

int main(void) {

	/*
	int i, * pi; // 정수형 변수를 가리키는 포인터 변수 pi

	printf("i에 임의의값 할당: "); // 사용자가 직접입력 OK
	//scanf("%d", i);

	i = rand() % 100; 
	pi = &i;
	*pi = rand() % 100; // 1~100까지 랜덤수 

	printf("%d", i);
	*/

	int i, * pi;
	i = 5;
	pi = &i;
	*pi = 10;
	printf("%d", i);
	return 0;

}