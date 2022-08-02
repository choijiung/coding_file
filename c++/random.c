#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_random(void) {
	//srand(time(NULL)); =  난수 초기화
	//int num = rand() % 3 + 1; = % 어떤수 +어떤순

	printf("난수 초기화 이전.\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand() % 10);
	}

	srand(time(NULL));
	printf("난수 초기화 이후.\n");
	for (int i = 0; i < 10; i++) {
		printf("%d\n", rand() % 10);
	}

	return 0;
}