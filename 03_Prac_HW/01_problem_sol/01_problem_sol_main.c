#define _CRT_SECURE_NO_WARNINGS     
#include <stdio.h>
int main(void)
{
	int num=1;
	int n;
	int state = 0; // 0�� ��, ���ʿ��� ������ ����, 1�϶� �����ʿ��� �������� ����

	scanf_s("%d", &n);
	int arr[50][50] = {0,};

	int tmp = 1;
	int i, j;
	for (i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < n; j++) {
				arr[i][j] = tmp;
				tmp++;
			}
		}
		else {
			for (j = n - 1; j >= 0; j--) {
				arr[i][j] = tmp;
				tmp++;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	return 0; 
}