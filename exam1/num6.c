#include <stdio.h>
//6번
int main() {

    int number; //정수를 저장할 변수
    int tens, ones; //십의 자리, 일의 자리를 저장할 변수

    // 사용자로부터 정수 입력 받기
    printf("정수를 입력하시요: ");
    scanf("%d", &number);

    // 십의 자리와 일의 자리 계산
    tens = number / 10; // 십의 자리
    ones = number % 10; // 일의 자리

    // 결과 출력
    printf("십의 자리: %d\n일의 자리: %d\n", tens, ones);

    return 0;
}
