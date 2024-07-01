#include <stdio.h>
// 3번

// get_bigger 함수 정의
double get_bigger(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// 메인 함수
int main() {
    double num1, num2, bigger;

    // 사용자로부터 두 실수를 입력받음
    printf("실수를 입력하십시오: ");
    scanf("%lf %lf", &num1, &num2);

    // get_bigger 함수를 호출하여 더 큰 수를 반환받음
    bigger = get_bigger(num1, num2);

    // 결과 출력
    printf("큰 수는 %.1lf입니다.\n", bigger);

    return 0;
}
