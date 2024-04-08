#include <stdio.h>
//1번
int main() {

    double num1, num2, num3; //세 개의 실수를 저장할 변수
    double sum, average; //합과 평균

    // 사용자로부터 세 개의 실수를 입력받음
    printf("실수를 입력하시오: ");
    scanf("%lf", &num1);

    printf("실수를 입력하시오: ");
    scanf("%lf", &num2);

    printf("실수를 입력하시오: ");
    scanf("%lf", &num3);

    // 합계와 평균을 계산
    sum = num1 + num2 + num3;
    average = sum / 3.0;

    // 결과 출력
    printf("합은 %lf이고 평균은 %lf입니다.\n", sum, average);

    return 0;
}
