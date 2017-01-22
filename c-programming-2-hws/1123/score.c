/*
	작성자 : 한영빈
	학번 : 201632034
	학과 : 소프트웨어공학과
	제목 : 점수 입력/출력/평균 계산
	작성일 : 2016.11.25
*/

#include<stdio.h>
#define COUNT 3 // 배열 항목 갯수
// 점수 구조체 정의
typedef struct score{
	char * studentId;
	char * name;
	double korScore;
	double engScore;
	double mathScore;
}Score;

// 함수 원형 선언
void inputScores(Score * scores, int length);
void outputScores(Score * score);
void averageScore(Score * score, Score * avrScore, int length);

int main(void){
	// 점수 구조체 배열 초기화
	Score scores[COUNT] = {
		{"123123123", "홍길동", 0, 0, 0 },
		{"234234234", "임꺽정", 0, 0, 0 },
		{"009900990", "고양이", 0, 0, 0 }
	};
	// 점수 평균 구조체 초기화
	Score total = {"","",0,0,0};
	int i; // 반복문에 쓸 변수

	// 점수 입력받기
	inputScores(scores, COUNT);
	// 점수 출력
	for(i=0; i<COUNT; i++){
		outputScores(&scores[i]);
	}
	// 평균 계산
	averageScore(scores, &total, COUNT);
	// 평균 출력
	printf("국어 평균 : %.2f, 영어 평균 : %.2f, 수학 평균 : %.2f\n",
		total.korScore, total.engScore, total.mathScore);
}

void inputScores(Score * scores, int length){
	int i; // 반복문에 쓸 변수
	// 학생별로 점수 입력받기
	for(i=0; i<length; i++){
		printf("%s 학생의 점수를 입력하세요.\n", (scores+i)->name);
		printf("국어 점수 입력 : ");
		scanf("%lf", &((scores+i)->korScore));
		printf("영어 점수 입력 : ");
		scanf("%lf", &((scores+i)->engScore));
		printf("수학 점수 입력 : ");
		scanf("%lf", &((scores+i)->mathScore));
	}
}

void outputScores(Score * score){
	// 입력받은 점수 구조체의 이름, 학번, 점수 출력
	printf("학번 : %s, 이름 : %s\n", score->studentId, score->name);
	printf("국어 : %.2f, 영어 : %.2f, 수학 : %.2f\n",
		score->korScore, score->engScore, score->mathScore);
}

void averageScore(Score * scoreArr, Score * avrScore, int length){
	// 점수 합에 쓸 변수
	double kor=0, eng=0, math=0;
	int i; // 반복문에 쓸 변수
	for(i=0; i<length; i++){
		// 과목별 점수 합 구하기
		kor += (scoreArr+i)->korScore;
		eng += (scoreArr+i)->engScore;
		math += (scoreArr+i)->mathScore;
	}
	// 평균을 구하여 구조체 포인터를 이용해, 구조체에 저장
	avrScore->korScore = kor/length;
	avrScore->engScore = eng/length;
	avrScore->mathScore = math/length;
}
