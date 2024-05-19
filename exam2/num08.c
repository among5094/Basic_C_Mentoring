#include <stdio.h>
//8번
int main() {
    int num, reversed_num = 0;

    printf("반대로 출력할 정수를 입력하세요: ");
    scanf("%d", &num);

    // 숫자를 반대로 뒤집기
    do {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10;
    } while (num != 0);

    printf("입력한 수를 반대로 출력하면>>> %d\n", reversed_num);

    return 0;
}
