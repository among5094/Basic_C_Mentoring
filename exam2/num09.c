#include <stdio.h>
//9번

// 입력된 정수 n까지의 합을 출력하는 함수
void print_sum_series(int n) {

    int sum = 0;// 합을 저장할 변수

    for (int i = 1; i <= n; i++) {
        sum += i;
        for (int j = 1; j <= i; j++) {
            printf("%d", j);

            // 마지막 숫자가 아니면 ' + '를 출력하는 if문
            if (j < i) {
                printf(" + ");
            }
        }
        // 현재까지의 합을 출력하는 printf문
        printf(" = %d\n", sum);
    }
}

int main() {
    int num;

    while (1) {
        printf("양의 정수 또는 0(종료)을 입력: ");
        scanf("%d", &num);

        // 입력된 숫자가 0 또는 음수이면 종료하는 if문
        if (num <= 0) {
            printf("종료합니다.\n");
            break;
        }

        // 입력된 숫자까지의 합을 출력
        print_sum_series(num);
    }

    return 0;
}
