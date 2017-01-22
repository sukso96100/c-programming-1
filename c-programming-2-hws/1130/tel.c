/*
  �̸� : �ѿ���
  �а� : ����Ʈ������а�
  �й� : 201632034
  ���� : ���� �о���̱�
  �ۼ��� : 2016.11.30
*/

// �ʿ��� ������� �ε�
#include<stdio.h>
#include<string.h>

// tel ����ü ����
typedef struct {
	char name[20]; // �̸�
	char tel[40]; // ��ȭ��ȣ
}tel;

// �Լ� ���� ����
void readData(tel * telBook, int length);
tel * search(char keyword[20], tel * telBook, int length);

int main(void) {
	tel telBook[10]; // ��ȭ��ȣ ������ �Է¹��� �迭
	tel * result; // �˻� ��� ����ü�� �ּҸ� ������ ������
	char name[20]; // �˻� Ű���带 ������ ����

	// ������ �ε�
	readData(telBook, 10);

	// �˻� Ű���� �Է¹ޱ�
	printf("��ȭ��ȣ�� �˻��� ����� �̸��� �Է��ϼ���. : ");
	scanf("%s", &name);

	// �˻�
	result = search(name, telBook, 10);

	// �˻� ��� ǥ��
	if (result == NULL) {
		// NULL �� ��� - �˻���� ����
		printf("%s �� ��ȭ��ȣ�� �����ϴ�.\n", name);
		return -1;
	}
	else {
		// �˻� ��� �ִ� ���
		printf("%s %s\n", result->name, result->tel);
	}
	return 0;
}

// ������ �о���̴� �Լ�
void readData(tel * telBook, int length) {
	// ���� ����
	FILE * f = fopen("tel.dat", "rt");
	int i;
	// �ܾ� ������ �о�鿩 ����ü �迭�� ����
	for (i = 0; i<length; i++) {
		fscanf(f, "%s", (telBook + i)->name);
		fscanf(f, "%s", (telBook + i)->tel);
	}
	// ���� �ݱ�
	fclose(f);
}

// �˻� �Լ�
tel * search(char keyword[20], tel * telBook, int length) {
	int i;
	for (i = 0; i<length; i++) {
		// �˻� Ű�����, �� ����ü�� name �ʵ� ��
		if (strncmp(keyword, (telBook + i)->name, 20) == 0) {
			// ��ġ�ϸ� �ش� ����ü�� �ּ� ��ȯ
			return telBook + i;
		}
	}
	// ��ġ�ϴ� ���� ������ NULL �� ��ȯ
	return NULL;
}
