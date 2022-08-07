#include <stdio.h>

int main_loop(void) {
	//printf("Hello World");

	//++ 뿔뿔
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/

	//int b = 20;
	////b = b+1;
	//printf("b는  %d\n", ++b);
	//printf("b는  %d\n", b++);
	//printf("b는  %d\n", b);

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

	//반복문
	//for, while, do while

	//for (선언; 조건; 증강) 
	//for (int i = 1; i <= 10; i++) {
	//	printf("Hello World %d\n", i);
	//}

	//while (조건) { }

	/*
	int i = 1;
	while ( i <= 10){
		printf("Hello World %d\n", i++);
		//i++;
	}
	*/

	// do { } while (조건)
	/*
	int i = 1;
	do{
		printf("Hello World %d\n", i++);
	} while (i <= 10);

	*/
	//2중 반복문
	/*
	for (int i = 1; i <= 3; i++) {
		printf("첫번째 반복문 : %d\n", i);
		for (int j = 1; j < 5; j++) {
			printf("		 두번째 반복문 %d\n", j );
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