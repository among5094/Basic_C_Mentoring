#include <stdio.h>
//8번
int main() {
    
    double cm, inches;

    // 사용자로부터 cm 단위의 길이 입력 받기
    printf("길이 입력: ");
    scanf("%lf", &cm);

    // cm를 inch로 변환
    inches = cm / 2.54;

    // 변환된 inch 값 출력
    printf("%.6f cm는 %.6f inch입니다.\n", cm, inches);

    return 0;
}
