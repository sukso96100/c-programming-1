/*
제목 : 점수 평균 계산
작성일 : 2016.05.12
작성자 : 한영빈
학과 : 소프트웨어공학과
학번 : 201632034
*/

#include<stdio.h>

int main(void){

    //변수 선언 & 초기화
    double num1 = 0, num2 = 0, num3 = 0;
    double avr = 0;

	//작성자 정보 출력
	printf("점수 평균 계산 - 2016.05.12 한영빈(소프트웨어공학과 201632034)\n");

    // 점수 3개 입력 받기
    printf("0~100 사이 점수 3개를 입력하세요.(예 : 60 90 85)\n");
    scanf_s("%lf %lf %lf", &num1, &num2, &num3);
    printf("입력받은 점수 : %f %f %f\n", num1, num2, num3);

    // 입력한 점수 3개 모두가 0~100 사이인지 확인
    while(!(num1>=0 && num1<=100) || !(num2>=0 && num2<=100) || !(num3>=0 && num3<=100)){
        // 입력받은 점수 중 하나라도 0~100 사이 점수가 아니면, 다시 입력 받기.
        printf("입력받은 점수 중 하나 이상의 점수가 0에서 100사이의 값이 아닙니다. \n");
        printf("0~100 사이 점수 3개를 입력하세요.(예 : 60 90 85)\n");
        scanf_s("%lf %lf %lf", &num1, &num2, &num3);
        printf("입력받은 점수 : %f %f %f\n", num1, num2, num3);
    }

    //평균 계산.
    avr = (num1 + num2 + num3) / 3;

    //평균 점수에 대해, A~F 중 하나 출력
    if(avr>=90 && avr <=100){
        printf("A");
    }else if(avr>=80 && avr <=89){
        printf("B");
    }else if(avr>=70 && avr <=79){
        printf("C");
    }else if(avr>=60 && avr <=69){
        printf("D");
    }else{
        printf("F");
    }

    return 0;
}