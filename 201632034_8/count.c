/*
제목 : 문자열 카운팅
작성일 : 2016.05.26
작성자 : 한영빈
학과 : 소프트웨어공학과
학번 : 201632034
*/

#include <stdio.h>
int main(void){
  char String[99];
  int i = 0;
  int countAlphabet = 0;
  int countEtcChar = 0;

  printf("제목 : 문자열 카운팅\n");
  printf("2016.05.26\n");
  printf("소프트웨어공학과 201632034 한영빈\n");

  printf("띄어쓰기 없이 문자열을 입력하세요.(최대99자)");
  scanf("%s", String);

  for(i=0; i<99; i++){
    if(String[i]=='\0'){
      // 문자열의 끝 -> 반복문 탈출
      break;
    }if((String[i]>64 && String[i]<91)||(String[i]>96 && String[i]<122)){
      //알파벳 -> 알파벳 카운팅
      countAlphabet++;
    }else{
      // 그외 -> 기타 문자 카운팅
      countEtcChar++;
    }
  }
  printf("알파벳 수 : %d \n", countAlphabet);
  printf("알파벳 제외한 다른 문자 수 : %d \n", countEtcChar);
}
