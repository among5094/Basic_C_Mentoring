#include <stdio.h>
//2번
int main() {
    int n;

    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    // 1부터 n까지의 팩토리얼 계산 및 출력
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("%d!은 %d 입니다.\n", i, factorial);
    }

    return 0;
}
