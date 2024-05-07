#include <stdio.h>
//1번

int main() {
    int x, y; 

    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    printf("정수를 입력하세요: ");
    scanf("%d", &y); 

    // y가 x의 약수인지 검사
    if (y != 0 && x % y == 0) {
        printf("약수입니다.\n");
    } else {
        printf("약수가 아닙니다.\n");
    }

    return 0;
}
