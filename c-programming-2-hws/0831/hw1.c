// Authored by Youngbin Han<sukso96100@gmail.com>
#include<stdio.h>
// 두 수의 차를 반환하는 함수
int diff(int a, int b){
 return a - b;
}
int main(void){
 int i, j; // i : 반복문에 사용할 변수, j : do-while 에서 사용할 변수
 int a, b = 0; // 두 수의 차를 구하기 위해 두 수를 입력받아 저장할 변수
 char str[] = "Excellent"; // 문자열을 "Excellent" 로 초기화
 char * ps = str; // str[1] 을 포인팅하는 포인터 초기화
 // for 반복문으로 문자열의 각 요소를 한 줄에 하나씩 출력
 for (i = 0; i < 9; i++){
  printf("%c \n", *ps);
  ps++;
 }
 // 인덱스 받아서 문자 출력하기
 do{
  printf("출력할 문자의 인덱스를 입력하세요 :");
  scanf("%d", &j);
 } while (j<0 || j>8);
 printf("입력하신 인덱스에 해당되는 문자는 %c 입니다. \n", str[j]);
 // 두 수의 차를 구하여 출력
 do{
  printf("두 수를 입력하세요. 단, 앞에 입력한 것이 뒤에 입력한 것 보다 커야 합니다.(예시 : 6 3) :");
  scanf("%d %d", &a, &b);
 }while(a<b);
 printf("%d와 %d의 차이는 %d 입니다. \n", a, b, diff(a, b));
 return 0;
}
