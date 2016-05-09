/*
제목 : A 부터 B 까지의 합
작성일 : 2016.05.07
이름 : 한영빈
학과 : 소프트웨어공학과
학번 : 201632034
*/

#include <stdio.h>
int main(void) {
  int a = 0, b = 0;
  int sum = 0, loop = 0;

  printf("A 부터 B 까지의 숫자 합 구하기\n");
  printf("소프트웨어공학과 201632034 한영빈\n\n");

  printf("a 에 대한 숫자 입력\n");
  scanf("%d", &a);
  printf("b 에 대한 숫자 입력 - a 에 대한 숫자보다 커야 함.\n" );
  scanf("%d", &b);
  for(loop = a; loop<=b; loop++ )
  {
    sum += loop;
  }
  printf("%d + ... + %d = %d", a, b, sum);
  return 0;
}
