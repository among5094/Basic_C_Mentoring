#include <stdio.h>
//12번 

// get_first_digit 함수 정의
int get_first_digit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

// 메인 함수
int main() {
    int number;
    
    printf("정수를 입력하십시오: ");
    scanf("%d", &number);
    
    // get_first_digit 함수 호출 및 결과 출력
    int first_digit = get_first_digit(number);
    printf("가장 상위 자리는 %d입니다.\n", first_digit);
    
    return 0;
}
