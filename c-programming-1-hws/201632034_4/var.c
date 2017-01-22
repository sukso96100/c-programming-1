/*
주제 : 산술연산
작성일 : 2016.04.07
작성자 : 한영빈
학번 : 201632034
학과 : 소프트웨어공학과
*/

#include <stdio.h>
int main (void){
	
	//변수 선언 및 초기화
	int num1 = 30;
	int num2 = 10;
	int num1_next = 0;
	int num1_prev = 0;

	//num1 의 다음 숫자와 이전 숫자 계산하여 저장
	num1_next = ++num1; //전위증가
	num1 = 30; //num1 에 30 저장
	num1_prev = --num1; //전위감소
	num1 = 30; //num1 에 30 저장

	//출력
	printf("두 개의 정수는 %d, %d 입니다. \n", num1, num2);
	printf("두 정수의 합은 %d \n", num1 + num2);
	printf("두 정수의 곱은 %d \n", num1 * num2);
	printf("두 정수의 차는 %d \n", num1 - num2);
	printf("%d 을 %d 로 나누었을 때의 몫은 %d \n", num1, num2, num1 / num2);
	printf("%d 을 %d 로 나누었을 때의 나머지는 %d \n", num1, num2, num1 % num2);
	printf("%d 다음의 정수는 %d 입니다. \n", num1, num1_next);
	printf("%d 이전의 정수는 %d 입니다. \n", num1, num1_prev);

	return 0;
}