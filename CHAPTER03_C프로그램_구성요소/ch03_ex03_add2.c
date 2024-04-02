//사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력
//윈도우 사용자라면 define쓰기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

    int x; //첫 번째 정수를 저장할 변수
    int y; //두 번째 정수를 저장할 변수
    int sum; //두수의 합을 저장할 변수

    //입력단계
    printf("첫 번째 숫자를 입력하시오:" ); 
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하시오:" );
    scanf("%d", &y);

    //처리단계
    sum = x+y;

    //출력단계
    printf("두수의 합: %d\n", sum );

    return 0;
}