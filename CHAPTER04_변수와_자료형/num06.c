#include <stdio.h>
//6번
int main() {
    // 지수 표기법을 사용하여 변수 초기화
    double term1 = 3.32e-3;  // 3.32 * 10^-3
    double term2 = 9.76e-8;  // 9.76 * 10^-8
    double result;

    // 주어진 수식 계산
    result = term1 + term2;

    // 결과 출력
    printf("%lf\n", result);

    return 0;
}
