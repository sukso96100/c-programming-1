/*
  작성자 : 한영빈
  학과 : 소프트웨어공학과
  학번 : 201632034
  작성일 : 2016.10.07
  제목 : 최고값
  파일병 : maxmin.c
*/

#include<stdio.h>

// 배열에서 최고값 주소를 반환하는 함수의 원형 선언
double * max(double d[]);

int main(void){
  int i; // 반복문에 사용할 변수
  double * maxaddr; // 배열의 최고값을 가리키는 포인터
  // 임의의 double 형 데이터 10개를 보관하는 배열
  double nums[] = {0.1, 1.2, 2.3, 3.4, 4.5, 5.6, 7.8, 8.9, 9.0};

  // 각 배열 요소의 값 출력
  printf("배열의 초기값 출력\n");
  for (i = 0; i < 10; i++) {
    printf("%.2f ", nums[i]);
    if(i==9){
      printf("\n");
    }
  }

  // 최고값 반환하는 함수 호출
  maxaddr = max(nums);

  // 주소, 인덱스, 값 출력
  printf("최고값을 가지는 요소의 주소 : %p\n", maxaddr);
  printf("인덱스값 : %d\n", maxaddr - nums);
  printf("최고값 : %.2f\n", *maxaddr);

  return 0; // 끝
}

// 최고값 주소를 반환하는 함수
double * max(double d[]){
  int i; // 반복문에 사용할 변수
  double * addr; // 최고값의 주소
  double maxval=0; // 최고값을 저장할 변수

  // 반복문을 이용하여 최고값 찾기
  for (i = 0; i < 10; i++) {
    if(d[i]>=maxval){
      addr = &d[i];
      maxval = d[i];
    }
  }

  return addr; // 주소값 반환
}
