#include <stdio.h>

int main_condition(void) {
	////������ ź�ٰ� ����    �л� / �Ϲ������� ���� (�Ϲ��� : 20�� �̻�)
	//int age = 15;
	////if (����) {} else {}

	//if (age >= 20) {
	//	printf("�Ϲ��� �Դϴ�");
	//}
	//	
	//else {
	//	printf("�л��Դϴ�");
	//}

	//��, ��, ��
	//if, else if, else
	/*int age = 18;
	if (age <= 13) {
		printf("�ʵ��л��Դϴ�");
	}
	else if (age <= 16) {
		printf("���л��Դϴ�");
	}
	else if (age <= 19) {
		printf("����л��Դϴ�");
	}
	else {
		printf("�����Դϴ�");
	}*/

	//break / continue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���������� �Ѵ�
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("������ �л��� ���� ���� ���� �������� ������\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/
	//1������ 30������ �ִ� �ݿ� 7���� �Ἦ
	//7���� �����ϰ� 6������ 10���� ��������
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ���������� �ϼ���\n", i);
		}
	}*/

	//&& | | 
	/*
	int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a�� b�� Ȥ�� c�� d�� ���� �����ϴ�\n");
	}
	else {
		printf("���� ���� �ٸ��׿�\n");
	}
	*/
	//���� 0 ���� 1 �� 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 1) {
		print("����\n");
	}
	else if  (i == 1) {
		print("����\n");
	}
	else if (i == 2) {
		printf("��\n");
	}
	else{
		printf("����");
	}*/

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i){
	//case 0:printf("����\n"); break;
	//case 1:printf("����\n"); break;
	//case 2:printf("��\n"); break;
	//default:printf("����\n");  break;
	//}

	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("���� %d\n", num);
	int awnser = "0";
	int chance = 5;
	while (1){
		printf("���� ��ȸ %d\n", chance--);
		printf("���ڸ� ���������� (1 ~ 100) : ");
		scanf_s("%d", &awnser);

		if (awnser > num) {
			printf("down!!  \n\n");
		}
		else if (awnser < num) {
			printf("UP \n\n");
		}
		else if (awnser == num)
		{
			printf("�����Դϴ� !\n\n");
			break;
		}
		else if (chance== 0)
		{
			printf("tlfvpek!!! \n\n");
			break;
		}
		else
		{
			printf("�˼����¿����ٶ�ä��Ӥ��Ӥ���\n\n");
		}
	}
	return 0;
}