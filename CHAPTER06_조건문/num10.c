#include <stdio.h>
//10번
int main() {
    int x, y;

    printf("x, y좌표를 입력하세요: ");
    scanf("%d %d", &x, &y);
  
    // 좌표에 따른 사분면 판별
    if (x > 0 && y > 0) {
        printf("1사분면 입니다.\n");
    } else if (x < 0 && y > 0) {
        printf("2사분면 입니다.\n");
    } else if (x < 0 && y < 0) {
        printf("3사분면 입니다.\n");
    } else if (x > 0 && y < 0) {
        printf("4사분면 입니다.\n");
    }

    return 0;
}
