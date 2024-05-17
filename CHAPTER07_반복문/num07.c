#include <stdio.h>
//7번
int main() {
    int i, j, k;
    int n = 7; // n은 총 줄 수


    // 외부 반복문: 총 7층까지 출력하는 for문 역할
    for (i = 1; i <= n; i++) { 

        // 내부 반복문 1: 공백을 출력
        for (j = n - i; j > 0; j--) {
            printf(" ");
        }

        // 내부 반복문 2: 별을 출력합니다.
        for (k = 1; k <= i; k++) {
            printf("*");
        }

        // 한 줄이 끝나면 엔터해주기! <- 외부 반복문 역할
        printf("\n");
    }

    return 0;
}
