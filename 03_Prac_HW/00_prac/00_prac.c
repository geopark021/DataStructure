#include <stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
}; // 구조체 선언 후 중괄호 뒤에 세미콜론 필수 

int main(void)
{
	struct guy fellow[2] = {
		{{"EWwen", "VILLARD"},"grilled salmon","personality coach",68112.00},
	{{"Rodney", "Swillbelly"},"tripe","tabloid editor",232400.00 }
		};


struct guy* him;	/* 구조체를 가리키는 포인터*/

printf("주소 #1 : %p #2: %p\n", &fellow[0], &fellow[1]);
him = &fellow[0]; // guy 구조체 자료형을 가리키는 포인텨 변수 him
printf("포인터 #1: %p %2: %p\n", him, him + 1); // 인덱스 0번 다음의 주소를 가리킴 
printf("him->income은 $%.2f: (*him).income은 $%.2f\n", him->income, (*him).income);
him++;
printf("him->favfood는 %s: him->handle.last는 %s\n", him->favfood, him->handle.last);
	return 0;
}