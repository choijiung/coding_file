#include <stdio.h>

int main_loop(void) {
	//printf("Hello World");

	//++ �Ի�
	/*int a = 10;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);
	a++;
	printf("a�� %d\n", a);*/

	//int b = 20;
	////b = b+1;
	//printf("b��  %d\n", ++b);
	//printf("b��  %d\n", b++);
	//printf("b��  %d\n", b);

	/*
	int i = 1;
	printf("Hello World %d\n", i++); //1
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
*/

	//�ݺ���
	//for, while, do while

	//for (����; ����; ����) 
	//for (int i = 1; i <= 10; i++) {
	//	printf("Hello World %d\n", i);
	//}

	//while (����) { }

	/*
	int i = 1;
	while ( i <= 10){
		printf("Hello World %d\n", i++);
		//i++;
	}
	*/

	// do { } while (����)
	/*
	int i = 1;
	do{
		printf("Hello World %d\n", i++);
	} while (i <= 10);

	*/
	//2�� �ݺ���
	/*
	for (int i = 1; i <= 3; i++) {
		printf("ù��° �ݺ��� : %d\n", i);
		for (int j = 1; j < 5; j++) {
			printf("		 �ι�° �ݺ��� %d\n", j );
		}
	}
	*/

	/*
	* 
	**
	***
	****
	*****
	*/

	/*
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	    *
	   **
	  ***
	 ****
	*****
*/

	/*
	SSSS*
	SSS**
	SS***
	S****
	*****
*/

	for (int i = 0; i < 5; i++) 
	{
		for (int j = i; j < 5 - 1;  j++)
		{
			printf(" ");
		}
			for (int k = 0; k <= i; k++)
			{
				printf("*");
			}
			printf("\n");
	}

	return 0;
}