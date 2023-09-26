#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// �����Ҵ�

struct student {
	
	char classNumber[11];	// �й�
	float height;	// Ű 
	float weight; // ������

};

float getBMI(struct student* s, int index);
void printMembers(const struct students*, int student_num);
float get_avg_height(const struct student* s, int student_num);
float get_avg_weight(const struct student* s, int student_num);
int main(void)
{
	int student_num = 0; // �л� �� 
	printf("�л� �� �Է� :");
	scanf("%d", &student_num);
	// �л� ����ü ���� �迭 
	struct student* s = (struct student*)malloc(student_num*sizeof(struct student));
	int i;
	for (i = 0; i < student_num; i++) {
		printf("%d��° �л� �й�, Ű ������ �Է�: ", i+1);
		scanf("%s %f %f", &s[i].classNumber, &s[i].height, &s[i].weight);

	}

	
	// ����ü�� �Լ��� ���ڷ� ������ �� ������ ������ ����Ǿ��ٸ� &������ ���� ����ü �̸����� ����
	//printf("Ű ��� %.1f\n", get_avg_height(s, student_num));
	//printf("������ ��� %.1f\n", get_avg_weight(s, student_num));

	printMembers(s, student_num);
	
	
	free(s); // ���� �Ҵ� �޸� ����
	return 0;
}

float getBMI(struct student* s, int index)
{
	float heightToMeter = s[index].height / 100.0;	// cm�� m�� ��ȯ
	return s[index].weight / (heightToMeter * heightToMeter );
};

void printMembers(const struct student * s, int student_num)
{
	int i;
	// BMI ���� 
	for (i = 0; i < student_num; i++) {
		printf("%d��° �л� �й� : %s Ű : %.2f ������ : %f BMI: %.2f\n", i + 1, s[i].classNumber, s[i].height, s[i].weight, getBMI(s, i));

	};

	// BMI ������ 
	//for (i = 0; i < student_num; i++) {
	//	printf("%d��° �л� �й� : %s Ű : %.2f ������ : %.2f \n", i + 1, s[i].classNumber, s[i].height, s[i].weight);

	//};

	return; 
}

// Ű��� 
float get_avg_height(const struct student* s, int student_num)
{
	float sum=0; 
	for (int i = 0; i < student_num; i++) {
		sum += s[i].height;
	}

	return sum / student_num;
}
// ������ ���
float get_avg_weight(const struct student* s, int student_num)
{
	float sum = 0;
	for (int i = 0; i < student_num; i++) {
		sum += s[i].weight;
	}

	return sum / student_num; // ������ ��� 
}