#include<stdio.h>

int main_project1(void) {
	//경찰서 조서 쓰기
	char name[256];
	printf("이름이 뭐에요?");
	scanf("%s", name, sizeof(name));

	int age;
	printf("몇살이에요?");
	scanf("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요?");
	scanf("%f", &weight);

	double height;
	printf("키는 몇 cm이에요?");
	scanf("%lf", &height);

	char what[256];
	printf("무슨 잘못을 저질렀어요?");
	scanf("%c", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n--- 범죄자정보 ---\n\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄명 : %s\n", what);

	return 0;
}