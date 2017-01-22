/*
  작성자 - 소프트웨어공학과 201632034 한영빈
  작성일 - 2016.09.07
  제목 - 포인터 복습
  파일 이름 - pointer.c
*/

#include<stdio.h>

int main(void){

    // 일반 변수 선언
    int a = 1;
    double b = 1.2;
    char c = 'a';

    // 포인터 변수 선언
    int * pa;
    double * pb;
    char * pc;

    //변수 초기 값 출력
    printf("변수 초기 값 \n");
    printf("a=%d b=%f c=%c \n", a, b, c);

    // 포인터 변수에 일반 변수의 주소를 저장
    pa = &a;
    pb = &b;
    pc = &c;

    // 포인터 변수에 저장한 주소 값 출력
    printf("포인터 변수가 저장한 주소 값 \n");
    printf("pa=%d pb=%d pc=%d \n", pa, pb, pc);

    // 포인터 변수가 가리키느 곳에 있는 값 출력
    printf("포인터 변수가 가리키는 값 \n");
    printf("*pa=%d *pb=%f *pa=%c \n", *pa, *pb, *pc);

    // 포인터 변수가 가리키는 곳에 있는 값에 3을 더해,
    // 포인터 변수가 가리키는 곳에 저장
    *pa = *pa + 3;
    *pb = *pb + 3;
    *pc = *pc + 3;

    // 포인터 변수가 가리키는 곳에 있는 값 출력
    printf("3을 더한 후 포인터 변수가 가리키는 값 \n");
    printf("*pa=%d *pb=%f *pa=%c \n", *pa, *pb, *pc);

    // 끝
    return 0;
  }
