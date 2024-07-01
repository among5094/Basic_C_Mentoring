#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//10번
// randint 함수 정의
int randint() {
    return rand() % 81 + 10; // 10에서 90 사이의 정수를 반환
}

// 메인 함수
int main() {
    // 랜덤 시드 설정
    srand(time(0));
    
    // randint 함수를 10번 호출하여 출력
    for (int i = 0; i < 10; i++) {
        printf("%d ", randint());
    }
    printf("\n");
    
    return 0;
}
