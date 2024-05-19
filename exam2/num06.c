#include <stdio.h>
//6번

// 거듭제곱을 계산하는 함수
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int m, n;

    printf("정수 m 입력-> ");
    scanf("%d", &m);
    printf("정수 n 입력-> ");
    scanf("%d", &n);

    // 거듭제곱 계산 및 출력
    int result = power(m, n);
    printf("%d의 %d 제곱은 %d입니다.\n", m, n, result);

    return 0;
}
