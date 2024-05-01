#include <stdio.h>
//2번
int main() {
    double num1, num2; 
    double sum, difference, product, quotient;

    // 사용자로부터 두 실수 입력받기
    printf("실수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2); 

    sum = num1 + num2; // 두 수의 합
    difference = num1 - num2; // 두 수의 차
    product = num1 * num2; // 두 수의 곱
    quotient = num1 / num2; // 두 수의 나눗셈 결과

    // 결과 출력
    printf("%.2lf %.2lf %.2lf %.2lf\n", sum,difference,product,quotient);
    

    return 0; // 프로그램 종료
}
