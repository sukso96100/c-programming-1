/*
제목 : OperatorFour
작성자 : 한영빈
작성일 : 2016.03.31
*/

#include <stdio.h>

int main(void){
	int num1 = 12;
	int num2 = 12;

	printf("num1 : %d \n", num1);
	printf("num1++ : %d \n", num1++); //후위 증가
	printf("num1 : %d \n", num1);

	printf("num2 : %d \n", num2);
	printf("++num2 : %d \n", ++num2); //전위 증가
	printf("num2 : %d \n", num2);

	return 0;
}