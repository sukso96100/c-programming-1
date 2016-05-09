/*
제목 : 팩토리얼
작성일 : 2016.05.07
이름 : 한영빈
학과 : 소프트웨어공학과
학번 : 201632034
*/

#include <stdio.h>
int main(void){
  int num = 0;
  int loop = 0;
  int factorial = 1;

  printf("팩토리얼\n");
  printf("소프트웨어공학과 201632034 한영빈\n\n");

  printf("Type a number \n");
  scanf("%d", &num);

  loop = num;
  for(loop; loop>0; loop--){
    factorial *=loop;
  }
  printf("%d! = %d", num, factorial);
  return 0;
}
