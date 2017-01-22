/*
	�ۼ��� : �ѿ���
	�а� : ����Ʈ������а�
	�й� : 201632034
	���� : �¼� ����
	���ϸ� : theater.c
	�ۼ��� : 2016.09.28
*/
#include<stdio.h>

// �¼� ���� ���¸� �����ִ� �Լ� ���� ����
void showReservationStatus(int seats[4][9]);

int main(void){
  // 2���� �迭�� �¼� ������ �ʱ�ȭ
  int seats[4][9] = {0,};
  int dotask = 0; // ���� �۾� ���� ���θ� �Է¹��� ����
  int row, col; // ������ �¼� ����

  // ���ѹݺ�
  while(1){
  showReservationStatus(seats); // �¼� ���� ��Ȳ ���
  // ���� ���� ����
  printf("������ ���Ͻø� 1�� �Է��Ͻð�, �ƴϸ� 0�� �Է��ϼ���:(0 �Ǵ� 1)\n");
  scanf("%d", &dotask);
  switch(dotask){
    case 0: // ������ ���� �������� ���
      return 0; // ���α׷� ����
	  break;
    case 1: // ������ �Ϸ��� ���
      do{
        // ������ �¼��� �� ��ȣ �Է¹ޱ�
        printf("��� ���� �����Ͻðڽ��ϱ�?(1~4 �� ���� �Է�)\n");
        scanf("%d", &row);
      }while(row<1 || row>4);
      do{
        // ������ �¼��� ��ȣ �Է¹ޱ�
        printf("��� �¼��� �����Ͻðڽ��ϱ�?(1~9 �� ���� �Է�)\n");
        scanf("%d", &col);
      }while(col<1 || col>9);
      seats[row-1][col-1] = 1; // �ش� �¼� ��ġ ��Ҹ� 1�� ����
	  break; //switch �� ����, while(1) �� ó������
    default:
      break; // 0,1  �� �ƴϸ� switch �� ��ħ
    }
    //switch �� ����, while(1) �� ó������
  }
  return 0;
}


// �¼� ���� ��Ȳ�� �����ִ� �Լ�
void showReservationStatus(int seats[4][9]){
  int i, j;
  // �ݺ����� �̿��Ͽ� �¼� ��Ȳ ���
  for(i=0; i<4; i++){
    if(i==0){ // i �� 0�� ���, �¼� ��ġ ã�µ� ����� ���ڵ��� ���
      printf("X : 1 2 3 4 5 6 7 8 9\n");
      printf("======================\n");
    }
    printf("%d : ", i+1); // �� ���� �տ�, �� ��ȣ ���
    for(j=0; j<9; j++){
      printf("%d ", seats[i][j]); // �¼� ��Ȳ ���
    }
    printf("\n"); // �ٹٲ�
  }
}
