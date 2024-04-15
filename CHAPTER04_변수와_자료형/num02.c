#include <stdio.h>
//2번
int main() {
    int number;  // 입력받을 정수 변수 선언

    // 사용자로부터 16진수로 정수 입력 받기
    printf("16진수로 정수를 입력하시오: ");
    scanf("%x", &number);

    // 8진수 형태로 출력
    printf("8진수 형식으로는 %o입니다.\n", number);

    // 10진수 형태로 출력
    printf("10진수 형식으로는 %d입니다.\n", number);

    // 16진수 형태로 출력 (대문자로 표시)
    printf("16진수 형식으로는 %#x입니다.\n", number);

    return 0;
}
