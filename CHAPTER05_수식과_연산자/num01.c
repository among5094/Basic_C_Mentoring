#include <stdio.h>
//1번
int main() {
    int num1, num2, quotient, remainder;

    printf("정수 2개를 입력하세요: ");
    scanf("%d %d", &num1, &num2);


    quotient = num1 / num2;  // 몫
    remainder = num1 % num2;  // 나머지

    printf("몫 = %d, 나머지 = %d\n", quotient, remainder);
    return 0;
}
