#include <stdio.h>
// 2번

// is_multiple 함수 정의
int is_multiple(int n, int m) {
    if (m == 0) {
        return 0; // m이 0이면 배수를 정의할 수 없으므로 0을 반환
    }


    if (n % m == 0) {
        return 1; // n이 m의 배수이면 1을 반환
    } else {
        return 0; // n이 m의 배수가 아니면 0을 반환
    }
}

int main() {
    int n, m;
    
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &n);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &m);
    
    // is_multiple 함수 호출 및 결과 출력
    if (is_multiple(n, m)) {
        printf("%d은 %d의 배수입니다.\n", n, m);
    } else {
        printf("%d은 %d의 배수가 아닙니다.\n", n, m);
    }
    
    return 0;
}
