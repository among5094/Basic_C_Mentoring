#include <stdio.h>
//2번
int main() {

    int number;

    // 사용자로부터 정수 입력 받기
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &number); //16진수 정수를 입력받음

    printf("8진수: %#o\n", number);// 8진수로 출력
    printf("10진수: %d\n", number);// 10진수로 출력
    printf("16진수: %#x\n", number);// 16진수로 출력 (소문자)

    return 0;
}
