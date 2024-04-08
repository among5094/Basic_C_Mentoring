#include <stdio.h>

/* 6번: 달의 중력은 지구의 약 17%라고 한다. 자신의 몸무게를 입력받아서 달에서의 몸무게를 계산하는 프로그램을 작성하여보라.
double형으로 계산한다.
힌트: weight_on_moon = weight_on_earth*0.7;*/

int main() {

    double weight_on_earth;  // 지구에서의 몸무게
    double weight_on_moon;   // 달에서의 몸무게

    // 사용자로부터 지구에서의 몸무게를 입력받음
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &weight_on_earth);

    // 달에서의 몸무게를 계산
    weight_on_moon = weight_on_earth * 0.17;

    // 달에서의 몸무게를 출력
    printf("달에서의 몸무게는 %.2lfkg입니다. \n", weight_on_moon);

    return 0;
}
