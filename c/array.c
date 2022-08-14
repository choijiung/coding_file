#include <stdio.h>

int main_array(void)
{
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_1);
	printf("지하철 2호차에 %d 명이 타고 있습니다\n", subway_2);
	printf("지하철 3호차에 %d 명이 타고 있습니다\n", subway_3);*/

	// 여러 개의 변수를 함께, 동시의 생성
	// int subway_array[3]; //[0] [1] [2]
	// subway_array[0] = 30;
	// subway_array[1] = 40;
	// subway_array[2] = 50;
	//
	// for (int i= 1; i < 3; i++)
	//{
	//	printf("지하절 %d호차에 %d명이 타고 있습니다\n", i + 1, subway_array[i]);
	//}

	//값 설정 방법
	//값은 무조건 초기화를 해야함
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[1]);
	}*/

	//배열 크기는 항상 상수로
	/*int size = 10;
	int arr[size];*/

	// int arr[10] = { 1, 2 }; //3번째 값부터는 '0'으로 추가됨
	// for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	// }

	// int arr[] = { 1, 2 }; //arr[2]

	/*float arr_f[5] = { 1.0f, 2.0f, 3.0f };

	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	/*char c = "B";
	printf("%c\n", c);*/

	//문자열 긑에는 끝을 나타내는 NULL 문자 '\0' 가 있어야 함
	// char str[6] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]

	// char str[7] = "coding";
	// printf("%s\n", str);

	// char str[] = "coding";
	///*printf("%s\n", str);
	// printf("%d\n", sizeof(str));*/

	// for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	// }

	// char kor[] = "나도코딩";
	// printf("%s\n", kor);
	// printf("%d\n", sizeof(kor));
	//영어 1글자 : 1바이트
	//한글 1글자 : 2바이트
	// char 크기 : 1 바이트

	// char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', "\0" };
	// char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	// printf("%s\n", c_array);

	char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
	// printf("%s\n", c_array);

	// for (int i = 0; i < sizeof(c_array); i++)
	// {
	// 	printf("%c\n", c_array[i]);
	// }

	// 	for (int i = 0; i < sizeof(c_array); i++)
	// {
	// 	printf("%d\n", c_array[i]); //아스티 코드 값 (null문자는 0)
	// }
	
	//문자열 입력받기
	// char name[256]; // <-배열
	// printf("이름이 뭐에요? : ");
	// scanf("%s", name, sizeof(name));
	// printf("%s\n", name);

	//참고 : 아스키 코드란? 미국표준협회에서 제시한 표준 코드 체계
	//7비트 총 128개 코드 (0~127)
	// a : 97
	// A : 65
	// 0: 48

	// printf("%c\n", 'a');
	// printf("%d\n", 'a'); //<-아스키 코드 알아보는 방법
	// printf("%d\n", 'b'); 
	// printf("%d\n", 'A'); 
	// printf("%d\n", '\0'); 
	// printf("%d\n", '0'); 
	// printf("%d\n", '1');

	//참고2: 0~127 사이의 아스키코드 정수값에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}

	return 0;
}