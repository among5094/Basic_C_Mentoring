#include <stdio.h>
//5번
int main() {
    int num1, num2, num3;
    int max;

    printf("정수1 입력: ");
    scanf("%d", &num1);
    printf("정수2 입력: ");
    scanf("%d", &num2);
    printf("정수3 입력: ");
    scanf("%d", &num3);

    // 세 정수 중에서 가장 큰 수를 찾기 위한 비교
    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // 가장 큰 수를 출력
    printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", max);

    return 0;
}
