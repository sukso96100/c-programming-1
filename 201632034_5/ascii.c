/*
제목 : 문자와 ASCII코드 및 반복문
작성자 : 한영빈
학번 : 201632034
학과 : 소프트웨어공학과
작성일 : 2016.04.28
*/
#include<stdio.h>

int main(void)
{
	char alphabet; //입력받은 소문자 알파벳을 저장할 변수
	int loop = 0; //반복문에 사용할 변수

	printf("ascii.c - 2016.04.28 에 작성됨\n");
	printf("201632034 소프트웨어공학과 한영빈\n");
	printf("==========\n");

	printf("a~r 사이 소문자 알파벳을 하나 입력하세요 : \n");
	scanf("%c", &alphabet); //a~r 사이 소문자 알파벳 하나 입력받기
	printf("\n");

	printf("==========\n");
	printf("입력받은 알파벳 소문자와 해당 문자의 ASCII 코드 값:\n\n");
	printf("문자 | ASCII 코드 값 \n");
	//입력받은 알파벳 소문자와 해당 문자의 ASCII 코드 값 출력
	printf("%4c | %13x \n\n", alphabet, alphabet);

	printf("==========\n");
	printf("입력받은 소문자의 대문자와, 해당 문자의 ASCII 코드 값:\n\n");
	printf("문자 | ASCII 코드 값 \n");
	//입력받은 알파벳 소문자에 대응되는 대문자와 해당 문자의 ASCII 코드 값 출력.
	printf("%4c | %13x \n\n", alphabet - 0x20, alphabet - 0x20); 

	printf("==========\n");
	printf("입력 받은 문자로부터 시작하여 연속된 5개의 알파벳과 해당 문자의 ASCII 코드 값과\n \
	해당 소문자에 대응되는 대문자와 대문자의 ASCII코드 값 : \n\n");

	//반복문을 이용하여 입력 받은 문자로부터 시작해 연속된 5개의 
	//소문자, 대응되는 ASCII 코드값, 대응되는 대문자와 이에 대응되는 ASCII 코드 값 출력
	printf("소문자 | 소문자의 ASCII 코드 값 | 대문자 | 대문자의 ASCII 코드 값 \n");
	while (loop < 5)
	{
		printf("%6c | %22x | %6c | %22x \n", alphabet + loop, alphabet + loop, alphabet + loop - 0x20, alphabet + loop - 0x20);
		loop++;
	}
	printf("==========\n");
	return 0;
}