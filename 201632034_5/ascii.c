/*
���� : ���ڿ� ASCII�ڵ� �� �ݺ���
�ۼ��� : �ѿ���
�й� : 201632034
�а� : ����Ʈ������а�
�ۼ��� : 2016.04.28
*/
#include<stdio.h>

int main(void)
{
	char alphabet; //�Է¹��� �ҹ��� ���ĺ��� ������ ����
	int loop = 0; //�ݺ����� ����� ����

	printf("ascii.c - 2016.04.28 �� �ۼ���\n");
	printf("201632034 ����Ʈ������а� �ѿ���\n");
	printf("==========\n");

	printf("a~r ���� �ҹ��� ���ĺ��� �ϳ� �Է��ϼ��� : \n");
	scanf("%c", &alphabet); //a~r ���� �ҹ��� ���ĺ� �ϳ� �Է¹ޱ�
	printf("\n");

	printf("==========\n");
	printf("�Է¹��� ���ĺ� �ҹ��ڿ� �ش� ������ ASCII �ڵ� ��:\n\n");
	printf("���� | ASCII �ڵ� �� \n");
	//�Է¹��� ���ĺ� �ҹ��ڿ� �ش� ������ ASCII �ڵ� �� ���
	printf("%4c | %13x \n\n", alphabet, alphabet);

	printf("==========\n");
	printf("�Է¹��� �ҹ����� �빮�ڿ�, �ش� ������ ASCII �ڵ� ��:\n\n");
	printf("���� | ASCII �ڵ� �� \n");
	//�Է¹��� ���ĺ� �ҹ��ڿ� �����Ǵ� �빮�ڿ� �ش� ������ ASCII �ڵ� �� ���.
	printf("%4c | %13x \n\n", alphabet - 0x20, alphabet - 0x20); 

	printf("==========\n");
	printf("�Է� ���� ���ڷκ��� �����Ͽ� ���ӵ� 5���� ���ĺ��� �ش� ������ ASCII �ڵ� ����\n \
	�ش� �ҹ��ڿ� �����Ǵ� �빮�ڿ� �빮���� ASCII�ڵ� �� : \n\n");

	//�ݺ����� �̿��Ͽ� �Է� ���� ���ڷκ��� ������ ���ӵ� 5���� 
	//�ҹ���, �����Ǵ� ASCII �ڵ尪, �����Ǵ� �빮�ڿ� �̿� �����Ǵ� ASCII �ڵ� �� ���
	printf("�ҹ��� | �ҹ����� ASCII �ڵ� �� | �빮�� | �빮���� ASCII �ڵ� �� \n");
	while (loop < 5)
	{
		printf("%6c | %22x | %6c | %22x \n", alphabet + loop, alphabet + loop, alphabet + loop - 0x20, alphabet + loop - 0x20);
		loop++;
	}
	printf("==========\n");
	return 0;
}