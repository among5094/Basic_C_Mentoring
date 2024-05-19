#include <stdio.h>
//7번
int main() {
    int i, j;

    // 첫 번째 부분: 감소하는 부분
    for (i = 4; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 두 번째 부분: 증가하는 부분
    for (i = 1; i <= 4; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
