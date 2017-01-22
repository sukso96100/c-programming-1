/*
  이름 : 한영빈
  학과 : 소프트웨어공학과
  학번 : 201632034
  제목 : 성적 조회
  작성일 : 2016.11.09
*/

#include<stdio.h>
#include<string.h>

// 배열에서 사람 이름을 검색하는 함수 선언
int search(char keyword[30], char * datas[], int datalen);

int main(void){
  char keyword[30]; // 검색 키워드를 입력받을 변수
  // 설적 자료
  char * name[] = {"김일수", "고양이", "홍길동", "판사님"}; // 이름
  double eng[] = {90.1, 60.5, 70.1, 99.1}; // 영어 성적
  double math[] = {80.0, 45.6, 89.3, 60.1}; // 수학 성적
  int index; // 검색 결과 인덱스를 저장할 변수

  // 안내문 출력
  fputs("검색할 이름을 입력하세요.\n", stdout);
  while (1){
    // 검색 키워드 입력받기
    fgets(keyword, 30, stdin);
    // 검색 수행
    index = search(keyword, name, 4);
    if(index==-1){
      // index 가 -1 이면 일치하는 데이터가 배열에 없는것임
      fputs("존재하지 않는 이름입니다.\n", stdout);
      return 1; // 종료
    }else{
      // 조회 성공. 반복문 벗어남
      break;
    }
  };

  // 점수 출력
  fputs("이름 | 영어 성적 | 수학 성적\n", stdout);
  printf("%s | %.2f | %.2f\n", name[index], eng[index], math[index]);

  return 0;
}

// 배열에서 사람 이름 검색하는 함수
int search(char keyword[30], char * datas[], int datalen){
  int i; // 반복문에 사용할 변수
  for(i=0; i<datalen; i++){
    // keyword(문자열) 와 datas 의 i 번째 요소(문자열) 을 비교
    if(strncmp(keyword, datas[i], strlen(datas[i]))==0){
      return i; // 동일하면 해당 인덱스 반환
    }
  }
  // 없으면 -1을 반환
  return -1;
}
