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
}; // ����ü ���� �� �߰�ȣ �ڿ� �����ݷ� �ʼ� 

int main(void)
{
	struct guy fellow[2] = {
		{{"EWwen", "VILLARD"},"grilled salmon","personality coach",68112.00},
	{{"Rodney", "Swillbelly"},"tripe","tabloid editor",232400.00 }
		};


struct guy* him;	/* ����ü�� ����Ű�� ������*/

printf("�ּ� #1 : %p #2: %p\n", &fellow[0], &fellow[1]);
him = &fellow[0]; // guy ����ü �ڷ����� ����Ű�� ������ ���� him
printf("������ #1: %p %2: %p\n", him, him + 1); // �ε��� 0�� ������ �ּҸ� ����Ŵ 
printf("him->income�� $%.2f: (*him).income�� $%.2f\n", him->income, (*him).income);
him++;
printf("him->favfood�� %s: him->handle.last�� %s\n", him->favfood, him->handle.last);
	return 0;
}