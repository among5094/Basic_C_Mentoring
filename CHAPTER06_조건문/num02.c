#include <stdio.h>
//2번
int main() {
    int x, y, z, min;

    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &x, &y, &z);

    // x와 y를 비교하여 작은 값 찾기
    if (x < y) {
        min = x;
    } else {
        min = y;
    }

    // 찾은 작은 값(min)과 z를 비교하여 더 작은 값 찾기
    if (z < min) {
        min = z;
    }

    printf("제일 작은 정수는 %d입니다.\n", min);

    return 0;
}
