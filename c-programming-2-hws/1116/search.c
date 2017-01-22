/*
이름 : 한영빈
학과 : 소프트웨어공학과
학번 : 201632034
제목 : 학생 정보 조회
작성일 : 2016.11.19
*/
#include<stdio.h>
#include<string.h>

// 학생 정보를 저장할 사용자 정의 자료형을 구조체로 정의
typedef struct{
	int id;
	char * name;
	char * major;
}STUDENT;

int main(void){

	// STUDENT 형 자료 10개 담는 배열 초기화
	STUDENT students[] = {
		{201632034, "한영빈", "소프트웨어공학과"},
		{201534028, "추건우", "소프트웨어공학과"},
		{201232016, "배다슬", "소프트웨어공학과"},
		{201632032, "최강식", "소프트웨어공학과"},
		{201632033, "최준호", "소프트웨어공학과"},
		{201632035, "판사님", "소프트웨어공학과"},
		{000032034, "고양이", "소프트웨어공학과"},
		{000132034, "홍길동", "소프트웨어공학과"},
		{111132032, "임꺽정", "소프트웨어공학과"},
		{000132034, "김홍도", "소프트웨어공학과"},
	};
	char nameToSearch[20]; // 입력받은 문자열 저장할 변수
	int i; // 반복문에 사용할 변수
	// 검색 키워드 입력받기
	fputs("검색할 학생의 이름을 입력하세요.\n", stdout);
	fgets(nameToSearch, sizeof(nameToSearch), stdin);

	// 반복문을 이용하여 하나씩 대조
	for(i=0; i<10; i++){
		// 일치하면 출력
		if(strncmp(nameToSearch, students[i].name, sizeof(students[i].name))==0){
			printf("학번 : %d\n", students[i].id);
			printf("이름 : %s\n", students[i].name);
			printf("학과 : %s\n", students[i].major);
			// 출력 후 종료
			return 0;
		}
	}
	// 일치하는 경우가 없음 - 그냥 종료
	fputs("해당 학생이 존재하지 않습니다.", stdout);
	return 0;
}