#include <stdio.h>

/* 5번: 다항식 3x^+7x+11의 값을 계산하는 프로그램을 작성하라. 
x의 값은 실수로 사용자에게 입력받는다.
힌트: 제곱은 x*x와 같이 계산한다. */

int main() {

    double x, result;
    
    // 사용자로부터 실수 x의 값을 입력받음
    printf("실수를 입력하시오: ");
    scanf("%lf", &x);
    
    // 다항식 계산: 3x^2 + 7x + 11
    result = 3*x*x + 7*x + 11;
    
    // 결과 출력
    printf("다항식의 값은 %.2f \n", result);
    
    return 0;
}
