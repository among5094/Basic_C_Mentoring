#include <stdio.h>
//1번
int main() {
    double number;  // 입력받을 실수 변수 선언

    // 사용자로부터 실수 입력 받기
    printf("실수를 입력하시오: ");
    scanf("%lf", &number);

    // 소수점 표기 방식으로 출력
    printf("실수형식으로는 %.6f입니다.\n", number);

    // 지수 표기 방식으로 출력(C99 이상에서는 자동으로 두 자리 지수를 사용)
    printf("지수형식으로는 %.6e입니다.\n", number);

    return 0;
}
