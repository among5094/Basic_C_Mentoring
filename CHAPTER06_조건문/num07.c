#include <stdio.h>
//7번
int main() {
    double height, weight, standardWeight;

    // 사용자로부터 키와 체중 입력 받기
    printf("체중과 키를 입력하세요: ");
    scanf("%lf %lf", &height, &weight);

    // 표준 체중 계산
    standardWeight = (height - 100) * 0.9;
    
    // 표준 체중과 사용자 체중 비교
    if (weight < standardWeight) {
        printf("저체중입니다.\n");
    } else if (weight > standardWeight) {
        printf("과체중입니다.\n");
    } else {
        printf("표준 체중입니다.\n");
    }

    return 0;
}
