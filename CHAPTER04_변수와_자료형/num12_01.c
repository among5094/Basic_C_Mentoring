#include <stdio.h>
//12번
int main() {
    int i = 255;
    
    // 10진수, 8진수, 16진수로 출력
    printf("10진수: %d \n", i);
    printf("8진수: %o \n", i);
    printf("16진수: %x \n", i);

    // i를 -1로 초기화하고 16진수로 출력
    i = -1;
    printf("i = -1의 16진수: %x \n", i);

    // i를 -2로 초기화하고 16진수로 출력
    i = -2;
    printf("i = -2의 16진수: %x \n", i);

    // i를 -3으로 초기화하고 16진수로 출력
    i = -3;
    printf("i = -3의 16진수: %x \n", i);

    return 0;
}
