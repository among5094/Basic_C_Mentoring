#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//11번

// 주사위를 굴려서 점수를 반환하는 함수
int roll_dice() {
    return rand() % 6 + 1; // 1에서 6 사이의 정수를 반환
}

// 메인 함수
int main() {
    int user_sum = 0, computer_sum = 0;
    
    // 랜덤 시드 설정
    srand(time(0));
    
    // 사용자의 주사위 점수 합계
    printf("사용자 주사위: ");
    for (int i = 0; i < 3; i++) {
        int roll = roll_dice();
        user_sum += roll;
        printf("%d ", roll);
    }
    printf("\n");
    
    // 컴퓨터의 주사위 점수 합계
    printf("컴퓨터 주사위: ");
    for (int i = 0; i < 3; i++) {
        int roll = roll_dice();
        computer_sum += roll;
        printf("%d ", roll);
    }
    printf("\n");
    
    // 결과 출력
    printf("사용자 점수: %d\n", user_sum);
    printf("컴퓨터 점수: %d\n", computer_sum);
    if (user_sum > computer_sum) {
        printf("사용자 승리\n");
    } else if (user_sum < computer_sum) {
        printf("컴퓨터 승리\n");
    } else {
        printf("무승부\n");
    }
    
    return 0;
}
