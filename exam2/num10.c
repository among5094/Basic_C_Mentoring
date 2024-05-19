#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//10번

int main() {

    //사용자가 맞춰야 하는 숫자, 사용자가 입력한 추측값, 사용자가 시도한 횟수
    int target, guess, attempts = 0; 
    
    // 랜덤 시드를 초기화
    srand(time(0));

    // 1에서 20 사이의 임의의 수를 생성
    target = rand() % 20 + 1;

    printf("1에서 20사이의 수를 맞추어 보세요>> ");

    // 사용자가 정답을 맞출 때까지 반복함!
    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("제시한 정수가 높습니다.\n");
        } else if (guess < target) {
            printf("제시한 정수가 낮습니다.\n");
        } else {
            printf("\n정답입니다! 시도횟수 : %d\n", attempts);
        }

        // 정답을 맞추지 못했을 경우 다시 시도하라는 메세지 띄우기
        if (guess != target) {
            printf("1에서 20사이의 수를 맞추어 보세요>> ");
        }
    } while (guess != target);

    return 0;
}
