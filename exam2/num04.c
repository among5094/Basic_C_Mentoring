#include <stdio.h>
//4번
int main() {
    double num1, num2;
    int int_part1, int_part2, sum;

    printf("2개의 실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    // 각 실수의 정수부 추출
    int_part1 = (int)num1;
    int_part2 = (int)num2;

    // 정수부의 합 계산
    sum = int_part1 + int_part2;

    printf("정수부의 합 = %d\n", sum);

    return 0;
}
