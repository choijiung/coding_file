#include <stdio.h>

void p();
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate);
int  add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div (int num, int num2);



int main_function(void) {
	//int num = 2;
	//p(num);

	//num = num + 3;
	//p(num);

	//num -= 1;
	//p(num);

	//num *= 3;
	//p(num);

	//num /=2;
	//p(num);

	//��ȯ���� ���� �Լ�
	//function_without_return();
	//int ret = function_with_return();
	//p(ret);
	//function_without_params();
	//function_with_params(1, 2, 3);
	
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);


	//int ret = apple(5, 2);
	//printf("%d��\n", ret);
	return 0;
}

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}

void p(int num) {
	printf("num �� %d�Դϴ�\n", num);
}

void function_without_params() {
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް��� �ִ� �Լ��̸�, ���޹��� ���� %d, %d, %d �Դϴ�\n", num1, num2, num3);
}

int apple(int total, int ate) {
	return total = ate;
}

int  add(int num, int num2) {
	return num + num2;
}

int sub(int num, int num2) {
	return num - num2;
}
int mul(int num, int num2) {
	return num * num2;
}

int div(int num, int num2) {
	return num / num2;
}


/*
��ȯ�� �Լ��̸�(����) {
	return num + 4;
}
*/