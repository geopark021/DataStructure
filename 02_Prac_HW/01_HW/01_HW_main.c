#include <stdio.h>

int main(void) {

	/*
	int i, * pi; // ������ ������ ����Ű�� ������ ���� pi

	printf("i�� �����ǰ� �Ҵ�: "); // ����ڰ� �����Է� OK
	//scanf("%d", i);

	i = rand() % 100; 
	pi = &i;
	*pi = rand() % 100; // 1~100���� ������ 

	printf("%d", i);
	*/

	int i, * pi;
	i = 5;
	pi = &i;
	*pi = 10;
	printf("%d", i);
	return 0;

}