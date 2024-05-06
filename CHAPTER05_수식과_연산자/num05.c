#include <stdio.h>
//5번
int main() {
    int number, tens, units;
    
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    tens = number / 10;   // 십의 자리
    units = number % 10;  // 일의 자리

    printf("십의 자리: %d\n", tens);
    printf("일의 자리: %d\n", units);

    return 0;
}
