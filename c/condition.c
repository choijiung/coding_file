#include <stdio.h>

int main_condition(void) {
	////버스를 탄다고 가정    학생 / 일반인으로 구분 (일반인 : 20세 이상)
	//int age = 15;
	////if (조건) {} else {}

	//if (age >= 20) {
	//	printf("일반인 입니다");
	//}
	//	
	//else {
	//	printf("학생입니다");
	//}

	//초, 중, 고
	//if, else if, else
	/*int age = 18;
	if (age <= 13) {
		printf("초등학생입니다");
	}
	else if (age <= 16) {
		printf("중학생입니다");
	}
	else if (age <= 19) {
		printf("고등학생입니다");
	}
	else {
		printf("성인입니다");
	}*/

	//break / continue
	// 1번에서 30번까지 있는 반에서 1번부터 5번까지 조별과제를 한다
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생은 집에 가지 말고 도서관에 가세요\n");
			break;
		}
		printf("%d번 학생은 조별 발표 준비 하세요\n", i);
	}*/
	//1번부터 30번까지 있는 반에 7번은 결석
	//7번을 제외하고 6번부터 10까지 조별과제
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 조별과제를 하세요\n", i);
		}
	}*/

	//&& | | 
	/*
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a와 b는 혹은 c와 d의 값이 같습니다\n");
	}
	else {
		printf("값이 서로 다르네요\n");
	}
	*/
	//가위 0 바위 1 보 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 1) {
		print("가위\n");
	}
	else if  (i == 1) {
		print("바위\n");
	}
	else if (i == 2) {
		printf("보\n");
	}
	else{
		printf("몰라여");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i){
	//case 0:printf("가위\n"); break;
	//case 1:printf("바위\n"); break;
	//case 2:printf("보\n"); break;
	//default:printf("몰라여\n");  break;
	//}

	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("숫자 %d\n", num);
	int awnser = "0";
	int chance = 5;
	while (1){
		printf("남은 기회 %d\n", chance--);
		printf("숫자를 맞혀보세요 (1 ~ 100) : ");
		scanf_s("%d", &awnser);

		if (awnser > num) {
			printf("down!!  \n\n");
		}
		else if (awnser < num) {
			printf("UP \n\n");
		}
		else if (awnser == num)
		{
			printf("정답입니다 !\n\n");
			break;
		}
		else if (chance== 0)
		{
			printf("tlfvpek!!! \n\n");
			break;
		}
		else
		{
			printf("알수없는오류바라ㅓㅏㅣㄹ머ㅏㄴ\n\n");
		}
	}
	return 0;
}