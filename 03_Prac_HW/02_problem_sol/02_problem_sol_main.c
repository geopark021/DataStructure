#include <stdio.h>

void change_array(int(*arr)[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = 0;
		}
	}
}


int main(void) {
	
	int arr[3][3] = { {0,0,0,}, {0,0,0,}, {0,0,0,} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] :", i, j);
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("before\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}

	change_array(arr);

	printf("after\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

