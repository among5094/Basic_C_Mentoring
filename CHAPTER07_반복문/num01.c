#include <stdio.h>
#include <windows.h>  // Windows에서 Sleep 함수를 사용하기 위한 헤더
//1번
int main() {
    int count;// 사용자로부터 입력받을 초

    printf("카운터의 초기값을 입력하시오(단위: 초): ");
    scanf("%d", &count);  // 사용자로부터 초를 입력받음

    for (int i = count; i > 0; i--) {
        printf("%d ", i);  // 현재 카운트를 출력
        Sleep(1000);  // 1초간 프로그램을 일시 정지
    }

    printf("\a");  // 벨소리 출력
    return 0;
}
