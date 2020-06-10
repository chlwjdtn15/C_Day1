// 문제 : 할인 대상인지 아닌지 출력해주세요.
// 조건 : 나이가 19세 이하이거나 60세 이상이면 할인 대상입니다.
// 조건 : 출력예시 처럼 출력되어야 합니다.
// 조건 : `구현시작` 부분만 수정 할 수 있습니다.
// 조건 : `&&, ||`없이 풀어야 합니다.

#include <stdio.h>

int main(void) {
  
  int age = 18; // 여기 값을 바꿔가면서 해보세요

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
  else if ( age < 60) {
    printf("You are not eligible for discount!\n");
  }

  if (age <= 19){
    printf("할인 대상이라네요!\n");
  } else if (age > 19)
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
}