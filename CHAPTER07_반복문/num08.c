#include <stdio.h>
//8번
int main() {
    int n, i, j;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    // 외부 반복문: 5층까지 출력
    for (i = 1; i <= n; i++) {

        //1부터 i까지 숫자 출력
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }


        printf("\n");
    }

    return 0;
}
