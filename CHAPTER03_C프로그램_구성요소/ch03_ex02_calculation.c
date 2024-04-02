/*사칙연산 실습*/
#include <stdio.h>

int main(void){

    //변수 선언 부분
    int x;
    int y;
    int sum,diff,mul,div;

    //대입 연산을 이용한 변수에 값 할당
    x=20;
    y=10;

    //각 변수에 연산 결과를 저장
    sum = x+y;
    diff= x-y;
    mul = x*y;
    div = x/y;

    //연산 결과를 출력하는 부분
    printf("두수의 합: %d \n", sum);
    printf("두수의 차: %d \n", diff);
    printf("두수의 곱: %d \n", mul);
    printf("두수의 몫: %d \n", div);

    return 0;
}