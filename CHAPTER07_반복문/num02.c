#include <stdio.h>
//2번
int main() {
    int sum = 0; 

    for (int i = 1; i <= 100; i++) {
        
        // 현재 숫자 i가 3의 배수인지 확인
        if (i % 3 == 0) {
            sum += i; // 3의 배수이면 sum에 더함
        }
    }

    printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.\n", sum);

    return 0;
}
