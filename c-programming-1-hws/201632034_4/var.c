/*
���� : �������
�ۼ��� : 2016.04.07
�ۼ��� : �ѿ���
�й� : 201632034
�а� : ����Ʈ������а�
*/

#include <stdio.h>
int main (void){
	
	//���� ���� �� �ʱ�ȭ
	int num1 = 30;
	int num2 = 10;
	int num1_next = 0;
	int num1_prev = 0;

	//num1 �� ���� ���ڿ� ���� ���� ����Ͽ� ����
	num1_next = ++num1; //��������
	num1 = 30; //num1 �� 30 ����
	num1_prev = --num1; //��������
	num1 = 30; //num1 �� 30 ����

	//���
	printf("�� ���� ������ %d, %d �Դϴ�. \n", num1, num2);
	printf("�� ������ ���� %d \n", num1 + num2);
	printf("�� ������ ���� %d \n", num1 * num2);
	printf("�� ������ ���� %d \n", num1 - num2);
	printf("%d �� %d �� �������� ���� ���� %d \n", num1, num2, num1 / num2);
	printf("%d �� %d �� �������� ���� �������� %d \n", num1, num2, num1 % num2);
	printf("%d ������ ������ %d �Դϴ�. \n", num1, num1_next);
	printf("%d ������ ������ %d �Դϴ�. \n", num1, num1_prev);

	return 0;
}