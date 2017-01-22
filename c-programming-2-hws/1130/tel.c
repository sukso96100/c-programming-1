/*
  이름 : 한영빈
  학과 : 소프트웨어공학과
  학번 : 201632034
  제목 : 파일 읽어들이기
  작성일 : 2016.11.30
*/

// 필요한 헤더파일 로드
#include<stdio.h>
#include<string.h>

// tel 구조체 정의
typedef struct {
	char name[20]; // 이름
	char tel[40]; // 전화번호
}tel;

// 함수 원형 선언
void readData(tel * telBook, int length);
tel * search(char keyword[20], tel * telBook, int length);

int main(void) {
	tel telBook[10]; // 전화번호 데이터 입력받을 배열
	tel * result; // 검색 결과 구조체의 주소를 저장할 포인터
	char name[20]; // 검색 키워드를 저장할 변수

	// 데이터 로드
	readData(telBook, 10);

	// 검색 키워드 입력받기
	printf("전화번호를 검색할 사람의 이름을 입력하세요. : ");
	scanf("%s", &name);

	// 검색
	result = search(name, telBook, 10);

	// 검색 결과 표시
	if (result == NULL) {
		// NULL 인 경우 - 검색결과 없음
		printf("%s 의 전화번호는 없습니다.\n", name);
		return -1;
	}
	else {
		// 검색 결과 있는 경우
		printf("%s %s\n", result->name, result->tel);
	}
	return 0;
}

// 데이터 읽어들이는 함수
void readData(tel * telBook, int length) {
	// 파일 개방
	FILE * f = fopen("tel.dat", "rt");
	int i;
	// 단어 단위로 읽어들여 구조체 배열에 저장
	for (i = 0; i<length; i++) {
		fscanf(f, "%s", (telBook + i)->name);
		fscanf(f, "%s", (telBook + i)->tel);
	}
	// 파일 닫기
	fclose(f);
}

// 검색 함수
tel * search(char keyword[20], tel * telBook, int length) {
	int i;
	for (i = 0; i<length; i++) {
		// 검색 키워드와, 각 구조체의 name 필드 비교
		if (strncmp(keyword, (telBook + i)->name, 20) == 0) {
			// 일치하면 해당 구조체의 주소 반환
			return telBook + i;
		}
	}
	// 일치하는 것이 없으면 NULL 을 반환
	return NULL;
}
