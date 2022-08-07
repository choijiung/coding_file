#include <stdio.h>
#include <time.h>

int  getrandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();


int main_fuuntion_project(void) {

	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		int num1 = getrandomNumber(i);
		int num2 = getrandomNumber(i);
		//printf("%d x %d ?", num1, num2);
		showQuestion(i, num1, num2);

		int awnser = -1;
		scanf_s("%d", &awnser);
		if (awnser == -1)
		{
			printf("프로그램을 종료합니다.\n");
			exit(0);
		}
		else if (awnser == num1  * num2)
		{
			success();
			count++;
		}
		else 
		{
			fail();

		}
	}

	printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞혔습니다.\n", count);

	return 0;
}

int getrandomNumber(int  level)
{
	return rand() % (level * 7) + 1;
}
void showQuestion(int level, int num1, int num2) {
	printf("\n\n\n####### %d번의 비밀번호 #######\n", level);
	printf("\n\t%d x %d는?\n\n	", num1, num2);
	printf("############################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1)>>");
}
void success()
{
	printf("\n >> Good! 정답입니다 \n");
}

void fail()
{
	printf("\n >> 땡! 틀렸습니다 \n");
}