#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a > b ? (a > c ? a : c) : (b > c ? b : c);

    // 최대값 출력
    printf("최대값은 %d입니다.\n", max);

    return 0;

}
