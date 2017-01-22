/*
	작성자 : 한영빈
	학과 : 소프트웨어공학과
	학번 : 201632034
	제목 : 좌석 예약
	파일명 : theater.c
	작성일 : 2016.09.28
*/
#include<stdio.h>

// 좌석 예약 상태를 보여주는 함수 원형 선언
void showReservationStatus(int seats[4][9]);

int main(void){
  // 2차원 배열로 좌석 데이터 초기화
  int seats[4][9] = {0,};
  int dotask = 0; // 예약 작업 실행 여부를 입력받을 변수
  int row, col; // 예약할 좌석 정보

  // 무한반복
  while(1){
  showReservationStatus(seats); // 좌석 예약 현황 출력
  // 예약 여부 결정
  printf("예약을 원하시면 1을 입력하시고, 아니면 0을 입력하세요:(0 또는 1)\n");
  scanf("%d", &dotask);
  switch(dotask){
    case 0: // 예약을 하지 않으려는 경우
      return 0; // 프로그램 종료
	  break;
    case 1: // 예약을 하려는 경우
      do{
        // 예약할 좌석의 줄 번호 입력받기
        printf("어느 줄을 예약하시겠습니까?(1~4 중 숫자 입력)\n");
        scanf("%d", &row);
      }while(row<1 || row>4);
      do{
        // 예약할 좌석의 번호 입력받기
        printf("어느 좌석을 예약하시겠습니까?(1~9 중 숫자 입력)\n");
        scanf("%d", &col);
      }while(col<1 || col>9);
      seats[row-1][col-1] = 1; // 해당 좌석 위치 요소를 1로 변경
	  break; //switch 문 종료, while(1) 의 처음으로
    default:
      break; // 0,1  이 아니면 switch 문 마침
    }
    //switch 문 종료, while(1) 의 처음으로
  }
  return 0;
}


// 좌석 예약 현황을 보여주는 함수
void showReservationStatus(int seats[4][9]){
  int i, j;
  // 반복문을 이용하여 좌석 현황 출력
  for(i=0; i<4; i++){
    if(i==0){ // i 가 0인 경우, 좌석 위치 찾는데 사용할 숫자들을 출력
      printf("X : 1 2 3 4 5 6 7 8 9\n");
      printf("======================\n");
    }
    printf("%d : ", i+1); // 각 줄의 앞에, 줄 번호 출력
    for(j=0; j<9; j++){
      printf("%d ", seats[i][j]); // 좌석 현황 출력
    }
    printf("\n"); // 줄바꿈
  }
}
