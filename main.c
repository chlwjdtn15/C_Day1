// 문제 : 할인 대상인지 아닌지 출력해주세요.
// 조건 : 나이가 19세 이하이거나 60세 이상이면 할인 대상입니다.
// 조건 : 출력예시 처럼 출력되어야 합니다.
// 조건 : `구현시작` 부분만 수정 할 수 있습니다.
// 조건 : `&&, ||`없이 풀어야 합니다.
/*
#include <stdio.h>

int main(void) {
  
  int age = 64; // 여기 값을 바꿔가면서 해보세요

  printf("당신의 나이는 %d살 입니다.\n", age);

  //if문만 사용하여 풀기
  if ( age >= 60) {

    if ( age < 60 ){

      printf("You are not eligible for discount!\n"); 

    }

    printf("할인 대상이래요!\n");
  }

  if (age <= 19){


    if ( age > 19 ){
      printf("You are not eligible for discount!\n");
    }
    printf("할인 대상이라네요!\n");
  }

  //else if, else 문 사용하여 풀기


  if ( age >= 60) { 

    printf("할인 대상이래요!\n");

  }
  else if (age <= 19){

    printf("할인 대상이라네요!\n");

  } else
  {
    printf("You are not eligible for discount!\n");
  }



  //논리연산자 사용하여 풀기
  if ( age > 19 && age < 60) {
    printf("You are not eligible for discount!\n");
  }

  if (age <= 19 || age >= 60 ) {
    printf("할인 대상이라네요!\n");
  }


  

  return 0;
}*/

//홀수와 짝수를 구별해주세요.
// num이 짝수면 even, 홀수면 odd 출력해주세요.
#include <stdio.h>

int main(void) {
  
  int num = 7;


  if ( num % 2 == 0 ) {  // % = 남은 수, 즉 2로 나누었을때 나머지가 0 이면 짝수에요.
                         //                2로 나누었을때 나머지가 생기면 홀수지요.
    printf("짝수네여\n");

  }else {
    printf("홀수네여\n");
  }


    int num1 = 10;
    int num2 = 20;


    if (num1 > num2) {
      printf("1번이 2번보다 커요\n");
    }else {

      printf("2번이 1번보다 커요\n");
    }



    // 운세 프로그램을 작성해주세요.
    // 세 정수, 순서대로 년도, 월, 일이 있습니다.
    //  (년 - 월 + 일)에 마지막 숫자가 0이면 "대박"을 출력, 그렇지 않으면 "그럭저럭"을 출력해주세요.


    int year = 2020;
    int month = 10;
    int day = 10;
    int sum = year - month + day;
    int lucky = sum - year;

    printf("%d\n", sum);

    if ( lucky > 0 ) {
      printf("그럭저럭\n");
    }
    else {
      printf("대박\n");
    }
    



  return 0;
}