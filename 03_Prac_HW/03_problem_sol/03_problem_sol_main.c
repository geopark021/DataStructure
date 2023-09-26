#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>		// 동적할당

struct student {
	
	char classNumber[11];	// 학번
	float height;	// 키 
	float weight; // 몸무게

};

float getBMI(struct student* s, int index);
void printMembers(const struct students*, int student_num);
float get_avg_height(const struct student* s, int student_num);
float get_avg_weight(const struct student* s, int student_num);
int main(void)
{
	int student_num = 0; // 학생 수 
	printf("학생 수 입력 :");
	scanf("%d", &student_num);
	// 학생 구조체 동적 배열 
	struct student* s = (struct student*)malloc(student_num*sizeof(struct student));
	int i;
	for (i = 0; i < student_num; i++) {
		printf("%d번째 학생 학번, 키 몸무게 입력: ", i+1);
		scanf("%s %f %f", &s[i].classNumber, &s[i].height, &s[i].weight);

	}

	
	// 구조체를 함수의 인자로 전달할 때 포인터 변수로 선언되었다면 &연산자 없이 구조체 이름으로 전달
	//printf("키 평균 %.1f\n", get_avg_height(s, student_num));
	//printf("몸무게 평균 %.1f\n", get_avg_weight(s, student_num));

	printMembers(s, student_num);
	
	
	free(s); // 동적 할당 메모리 해제
	return 0;
}

float getBMI(struct student* s, int index)
{
	float heightToMeter = s[index].height / 100.0;	// cm를 m로 변환
	return s[index].weight / (heightToMeter * heightToMeter );
};

void printMembers(const struct student * s, int student_num)
{
	int i;
	// BMI 포함 
	for (i = 0; i < student_num; i++) {
		printf("%d번째 학생 학번 : %s 키 : %.2f 몸무게 : %f BMI: %.2f\n", i + 1, s[i].classNumber, s[i].height, s[i].weight, getBMI(s, i));

	};

	// BMI 미포함 
	//for (i = 0; i < student_num; i++) {
	//	printf("%d번째 학생 학번 : %s 키 : %.2f 몸무게 : %.2f \n", i + 1, s[i].classNumber, s[i].height, s[i].weight);

	//};

	return; 
}

// 키평균 
float get_avg_height(const struct student* s, int student_num)
{
	float sum=0; 
	for (int i = 0; i < student_num; i++) {
		sum += s[i].height;
	}

	return sum / student_num;
}
// 몸무게 평균
float get_avg_weight(const struct student* s, int student_num)
{
	float sum = 0;
	for (int i = 0; i < student_num; i++) {
		sum += s[i].weight;
	}

	return sum / student_num; // 몸무게 평균 
}