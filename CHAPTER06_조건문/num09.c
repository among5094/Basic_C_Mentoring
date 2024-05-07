#include <stdio.h>
//9번
int main() {
    double x, result;

    printf("x 값을 입력하세요: ");
    scanf("%lf", &x);

    //함수 계산
    if (x <= 0) {
        result = x * x - 9 * x + 2;  // x^2 - 9x + 2
    } else {
        result = 7 * x + 2;  // 7x + 2
    }

    printf("f(x)의 값은 %.2lf 입니다.\n", result);

    return 0;
}
