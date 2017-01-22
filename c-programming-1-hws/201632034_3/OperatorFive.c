/*
제목 : OperatorFive
작성자 : 한영빈
작성일 : 2016.03.31
*/

#include <stdio.h>

int main(void){
	int num1 = 10;
	int num2 = (num1--)+2; //후위 감소

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);

	return 0;
}