#include<stdio.h>

int main_예시(void) {
	//구구단

	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("		%d X %d = %d\n", i,  j,  i * j);
		}
	}
}