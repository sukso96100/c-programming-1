/*
���� : OperatorTwo
�ۼ��� : �ѿ���
�ۼ��� : 2016.03.31
*/

#include <stdio.h>

int main(void){
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; //num1 = num1 + 3;
	num2 *= 4; //num2 = num2 * 4;
	num3 %= 5; //num3 = num3 % 5;

	//Print Results
	printf("Result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}