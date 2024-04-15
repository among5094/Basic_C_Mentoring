#include <stdio.h>
//3번
int main() {
    int x = 10;  // 변수 x를 10으로 초기화
    int y = 20;  // 변수 y를 20으로 초기화
    int temp;    // 임시 변수 temp 선언

    // x와 y의 값을 출력
    printf("x = %d y = %d\n", x, y);

    // x와 y의 값을 교환
    temp = x;  // temp에 x의 값을 저장
    x = y;     // x에 y의 값을 저장
    y = temp;  // y에 temp의 값을 저장

    // 교환된 x와 y의 값을 출력
    printf("x = %d y = %d\n", x, y);

    return 0;
}
