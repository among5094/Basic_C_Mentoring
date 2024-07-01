#include <stdio.h>

// is_leap 함수 정의
int is_leap(int year) {
    if (year % 4 == 0) {
        if (year % 100 != 0 || year % 400 == 0) {
            return 1; // 윤년
        }
    }
    return 0; // 평년
}

// 메인 함수
int main() {
    int year;
    
    // 사용자로부터 연도를 입력받음
    printf("연도를 입력하십시오: ");
    scanf("%d", &year);
    
    // is_leap 함수 호출 및 결과 출력
    if (is_leap(year)) {
        printf("%d년은 윤년입니다.\n", year);
    } else {
        printf("%d년은 윤년이 아닙니다.\n", year);
    }
    
    return 0;
}
