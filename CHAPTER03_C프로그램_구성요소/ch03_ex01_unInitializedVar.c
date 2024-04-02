/* 변수의 초기화 예제(ppt42쪽) */
#include <stdio.h>

int main() {

    int unInitializedVar; // 초기화되지 않은 변수
    printf("초기화되지 않은 변수 값: %d\n", unInitializedVar);
    
    int num; // 초기화되지 않은 변수
    printf("출력: %d\n", num);

    unInitializedVar = 10; // 10으로 초기화된 변수
    printf("초기화된 변수 값: %d\n", unInitializedVar);

    return 0;
}
