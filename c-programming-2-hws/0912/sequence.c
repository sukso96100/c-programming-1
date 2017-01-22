/*
  제목 : 숫자 연속 출력 및 연속출력된 숫자의 평균
  작성자 : 한영빈
  학번 : 201632034
  학과 : 소프트웨어공학과
  작성일 : 2016.09.12
  파일명 : sequence.c
*/
#include<stdio.h>

// 숫자를 연속 출력하는 함수의 원형 정의
void printNumbers(int);
// 연속된 숫자들의 평균을 반환하는 함수의 원형 정의
double calculateAverage(int);

int main(void){
  int input; // 입력 받은 값을 저장할 변수
  // 정수 하나 입력 받기
  printf("정수를 하나 입력하세요 : ");
  scanf("%d", &input);

  // 입력받은 값을 출력
  printf("입력한 값은 %d입니다.\n", input);

  // 입력 받은 값 부터 시작하여 총 5개의 숫자를 연속으로 출력
  printNumbers(input);

  // 연속 출력된 값들의 평균을 구하여 소수점 두번째 자리까지 출력
  printf("연속된 값의 평균은 %.2f입니다.\n", calculateAverage(input));

  // 끝
  return 0;
}

// 숫자를 연속 출력하는 함수
void printNumbers(int num){
  int i; // 반복문에 사용할 변수

  // 반복문을 사용하여,  num 부터 num+4 까지의 숫자를 출력
  printf("5개 연속된 값은 ");
  for(i=0; i<5; i++){
    printf("%d", num+i);
    if(i<4){
      printf(", ");
    }
  }
  printf(" 입니다\n");
}

// 연속된 숫자들의 평균을 반환하는 함수
double calculateAverage(int num){
  double sum = 0; // 연속된 숫자들의 합을 저장할 변수
  int i; // 반복문에 사용할 변수
  // 반복문을 이용하여 연속된 숫자들의 합을 구함
  for(i=0; i<5; i++){
    sum += (num+i);
  }
  return sum / 5; // 연속된 숫자들의 합을 5로 나눠 평균을 구해 반환
}
